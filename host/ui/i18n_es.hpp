#pragma once

#include <cstddef>

// The Spanish (Spain) table (i18n_es.cpp): the English text, then its translation.
namespace portablekit::ui {

struct SpanishEntry {
    const char *english;
    const char *spanish;
};

extern const SpanishEntry kSpanish[];
extern const std::size_t kSpanishCount;

} // namespace portablekit::ui
