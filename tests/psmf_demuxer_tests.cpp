// Copyright (c) 2026 Donelys. MIT License (see LICENSE).
// Which audio stream the demuxer takes from a movie that carries several (one
// per language), on packs built here in the layout of a PSMF's program stream.
// No game data.

#include "movie/psmf_demuxer.hpp"

#include <cstdio>
#include <vector>

namespace {

int g_failures = 0;

void check(bool condition, const char *what) {
    std::printf("%s %s\n", condition ? "ok  " : "FAIL", what);
    if (!condition) ++g_failures;
}

constexpr std::size_t kFrame = 40u;  // an ATRAC3plus frame: its 8-byte header and 32 bytes

void put_pes(std::vector<std::uint8_t> &pack, std::uint8_t private_id, std::uint8_t fill) {
    const std::size_t length = 3u + 4u + kFrame;  // PES flags, the 4-byte private header, one frame
    const std::uint8_t head[] = {0, 0, 1, 0xBD, static_cast<std::uint8_t>(length >> 8u),
                                 static_cast<std::uint8_t>(length), 0x80, 0x00, 0x00,
                                 private_id, 0, 0, 0};
    pack.insert(pack.end(), std::begin(head), std::end(head));
    const std::uint8_t frame_header[] = {0x0F, 0xD0, 0x00, 0x03, 0, 0, 0, 0};  // size ((3 & 0x3FF) + 1) * 8 + 8
    pack.insert(pack.end(), std::begin(frame_header), std::end(frame_header));
    pack.insert(pack.end(), kFrame - sizeof(frame_header), fill);
}

// A pack holding one frame of each of the audio streams 0 to 2, filled with
// the stream's number + 0x10.
std::vector<std::uint8_t> pack() {
    std::vector<std::uint8_t> bytes = {0, 0, 1, 0xBA, 0x44, 0, 4, 0, 4, 1, 0x89, 0xC3, 0xF8, 0xF8};
    for (std::uint8_t stream = 0; stream < 3u; ++stream) put_pes(bytes, stream, static_cast<std::uint8_t>(0x10u + stream));
    bytes.resize(portablekit::movie::kPackSize, 0u);
    return bytes;
}

std::uint8_t first_audio_byte(portablekit::movie::PsmfDemuxer &demuxer) {
    const auto unit = demuxer.pop_audio();
    return unit && !unit->data.empty() ? unit->data.back() : 0u;
}

} // namespace

int main() {
    using portablekit::movie::PsmfDemuxer;
    const auto bytes = pack();

    PsmfDemuxer first;  // nothing chosen: the first audio stream, as for a movie with one
    check(first.push_pack(bytes), "a pack is taken");
    check(first.audio_ready() && first_audio_byte(first) == 0x10u, "by default the audio of stream 0 comes out");
    check(!first.audio_ready(), "and only that one: the other languages are skipped");

    for (std::uint8_t stream = 1; stream < 3u; ++stream) {
        PsmfDemuxer chosen;
        chosen.set_audio_stream(stream);
        chosen.push_pack(bytes);
        check(first_audio_byte(chosen) == 0x10u + stream, "stream chosen: its audio comes out");
        check(!chosen.audio_ready(), "stream chosen: nothing else does");
    }

    PsmfDemuxer kept;
    kept.set_audio_stream(2);
    kept.reset();  // a flush or a restart keeps the language
    kept.push_pack(bytes);
    check(kept.audio_stream() == 2u && first_audio_byte(kept) == 0x12u, "reset keeps the chosen stream");

    PsmfDemuxer late;
    late.push_pack(bytes);
    late.set_audio_stream(1);  // a change drops the audio read so far
    check(!late.audio_ready(), "choosing a stream drops what was read of the previous one");
    late.push_pack(bytes);
    check(first_audio_byte(late) == 0x11u, "and the next pack gives the new stream");

    PsmfDemuxer missing;
    missing.set_audio_stream(7);
    missing.push_pack(bytes);
    check(!missing.audio_ready(), "a stream the movie lacks gives no audio");

    std::printf("%s\n", g_failures == 0 ? "all ok" : "FAILED");
    return g_failures == 0 ? 0 : 1;
}
