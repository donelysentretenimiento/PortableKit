// Copyright (c) 2026 Donelys. MIT License (see LICENSE).
// Spanish (Spain) for the interface (ui/i18n.hpp). Same layout as the Portuguese
// table in i18n.cpp: the English text exactly as the code writes it, then its
// translation, with every {} kept where the code puts a name or a number. Kept
// in a file of its own so that i18n.cpp merges cleanly with upstream.

#include "ui/i18n_es.hpp"

namespace portablekit::ui {

const SpanishEntry kSpanish[] = {
    // The menu's frame.
    {"Settings", "Ajustes"},
    {"Paused", "En pausa"},
    {"Running", "En ejecución"},
    {"Video", "Vídeo"},
    {"Audio", "Audio"},
    {"Controls", "Controles"},
    {"Network", "Red"},
    {"System", "Sistema"},
    {"Close", "Cerrar"},
    {"Resume", "Reanudar"},
    {"Select", "Seleccionar"},
    {"Back", "Volver"},
    {"Section", "Sección"},
    {"Change", "Cambiar"},
    {"Cancel", "Cancelar"},
    {"Quit", "Salir"},
    {"Done", "Hecho"},
    {"Later", "Más tarde"},
    {"On", "Activado"},
    {"Off", "Desactivado"},
    {"Yes", "Sí"},
    {"No", "No"},
    // The game's save list (save_chooser.cpp).
    {"Remastered movies", "Vídeos remasterizados"},
    {"Mods", "Mods"},
    {"Choose the folder in the window that opened.", "Elige la carpeta en la ventana que se ha abierto."},
    {"Choose the file in the window that opened.", "Elige el archivo en la ventana que se ha abierto."},
    {"Open the window again", "Volver a abrir la ventana"},
    {"If the window is hidden or was closed.", "Si la ventana está oculta o se ha cerrado."},
    {"Browse here instead", "Explorar aquí"},
    {"Choose with the list in this window.", "Elegir con la lista de esta ventana."},
    {"Choose nothing.", "No elegir nada."},
    {"Movies", "Vídeos"},
    {"Skip movies with START", "Saltar vídeos con START"},
    {"START during a movie ends it and goes on with the game.",
     "START durante un vídeo lo termina y continúa con el juego."},
    {"Open the movies folder", "Abrir la carpeta de vídeos"},
    {"Where remastered movies go: NAME.264, for the game's movie NAME. Kit Movie Tools puts them there.",
     "Aquí van los vídeos remasterizados: NOMBRE.264, para el vídeo NOMBRE del juego. Kit Movie Tools los coloca "
     "aquí."},
    {"No remastered movies found", "No se han encontrado vídeos remasterizados"},
    {"Game files", "Archivos del juego"},
    {"Replaced files", "Archivos reemplazados"},
    {"Reads the files a mod puts in the mods/files folder of the game's data in place of the disc's files at the same path (mods/files/PSP_GAME/USRDIR/…): translations, models, sounds. Takes effect the next time the game loads them.",
     "Lee los archivos que un mod coloca en la carpeta mods/files de los datos del juego en lugar de los archivos "
     "del disco con la misma ruta (mods/files/PSP_GAME/USRDIR/…): traducciones, modelos, sonidos. Surte efecto la "
     "próxima vez que el juego los cargue."},
    {"No replaced files found", "No se han encontrado archivos reemplazados"},
    {"Open the files folder", "Abrir la carpeta de archivos"},
    {"Where a mod's files go, in the disc's folders: PSP_GAME/USRDIR/…",
     "Aquí van los archivos de un mod, dentro de las carpetas del disco: PSP_GAME/USRDIR/…"},
    {"{} found", "{} encontrados"},
    {"Plays the remastered movies a mod puts in the mods/movies folder of the game's data (NAME.264, NAME the game's movie) in place of the game's own, with the game's sound.",
     "Reproduce los vídeos remasterizados que un mod coloca en la carpeta mods/movies de los datos del juego "
     "(NOMBRE.264, NOMBRE el vídeo del juego) en lugar de los originales, con el sonido del juego."},
    {"Load", "Cargar"},
    {"Save", "Guardar"},
    {"Choose", "Elegir"},
    {"New save data", "Nueva partida guardada"},
    {"Save over this save?", "¿Sobrescribir esta partida guardada?"},
    {"Delete this save?", "¿Borrar esta partida guardada?"},
    {"Slot {}", "Ranura {}"},
    {"Loading…", "Cargando…"},
    {"Saving…", "Guardando…"},
    {"Deleting…", "Borrando…"},
    {"Saved.", "Guardado."},
    {"Deleted.", "Borrado."},
    {"Could not save.", "No se ha podido guardar."},
    {"Could not delete.", "No se ha podido borrar."},
    {"1 save", "1 partida guardada"},
    {"{} saves", "{} partidas guardadas"},
    {"None", "Ninguno"},
    {"Default", "Predeterminado"},
    {"Type", "Escribir"},
    {"Cursor", "Cursor"},
    {"Symbols", "Símbolos"},
    {"Shift", "Mayús"},
    {"Space", "Espacio"},
    {"Delete", "Borrar"},
    {"Settings and pause", "Ajustes y pausa"},

    // Video.
    {"Picture", "Imagen"},
    {"Resolution", "Resolución"},
    {"Auto", "Automática"},
    {"Auto draws the game at the window's own size and follows it (at most 1632 lines). ×1 to ×6 draw 272 lines "
     "per step, 480×272 times the step unless the aspect ratio is Fill. Higher is sharper and needs more from the GPU.",
     "Automática dibuja el juego al tamaño de la propia ventana y lo sigue (hasta 1632 líneas). De ×1 a ×6 dibujan "
     "272 líneas por paso, 480×272 multiplicado por el paso, salvo que la relación de aspecto sea Rellenar. Más "
     "alta es más nítida y exige más a la GPU."},
    {"Display", "Pantalla"},
    {"Fullscreen", "Pantalla completa"},
    {"Window", "Ventana"},
    {"Fill the screen, or play in a window you can resize.",
     "Ocupar toda la pantalla, o jugar en una ventana cuyo tamaño puedes cambiar."},
    {"Window size", "Tamaño de la ventana"},
    {"The window's size, in multiples of the PSP's screen.", "El tamaño de la ventana, en múltiplos de la pantalla de la PSP."},
    {"Aspect ratio", "Relación de aspecto"},
    {"Original", "Original"},
    {"Stretch", "Estirar"},
    {"Fill", "Rellenar"},
    {"Original keeps the PSP's shape with black bars at the sides or top. Stretch fills the window by stretching "
     "the picture.",
     "Original conserva la forma de la PSP con barras negras a los lados o arriba. Estirar rellena la ventana "
     "estirando la imagen."},
    {"Original keeps the PSP's shape with black bars at the sides or top. Stretch fills the window by stretching "
     "the picture. Fill widens (or narrows) the game's view to the window's shape, keeping its height, and keeps "
     "the interface in the PSP's proportions.",
     "Original conserva la forma de la PSP con barras negras a los lados o arriba. Estirar rellena la ventana "
     "estirando la imagen. Rellenar ensancha (o estrecha) la vista del juego hasta la forma de la ventana, "
     "manteniendo su altura, y deja la interfaz con las proporciones de la PSP."},
    {"Scaling filter", "Filtro de escalado"},
    {"Antialiasing", "Suavizado de bordes"},
    {"Smooths the jagged edges of the picture. FXAA is a light pass over the finished picture that suits phones too; it softens text a little. Higher internal resolutions smooth edges as well, at a higher cost.",
     "Suaviza los bordes dentados de la imagen. FXAA es una pasada ligera sobre la imagen terminada que también "
     "va bien en móviles; suaviza un poco el texto. Las resoluciones internas más altas también suavizan los "
     "bordes, a un coste mayor."},
    {"Sharp", "Nítido"},
    {"Smooth", "Suave"},
    {"How the finished picture is scaled to the window: smooth (bilinear) or sharp (nearest pixel).",
     "Cómo se ajusta la imagen final a la ventana: suave (bilineal) o nítida (píxel más cercano)."},
    {"Texture filter", "Filtro de texturas"},
    {"How the game's textures are sampled: smooth (bilinear) or sharp (nearest texel).",
     "Cómo se muestrean las texturas del juego: suave (bilineal) o nítida (téxel más cercano)."},
    {"Texture pack", "Paquete de texturas"},
    {"Draws an HD texture pack in PPSSPP's format from mods/textures/{} in the data folder instead of the game's "
     "textures.",
     "Dibuja un paquete de texturas HD en formato PPSSPP, de mods/textures/{} en la carpeta de datos, en lugar de "
     "las texturas del juego."},
    {"Texture packs", "Paquetes de texturas"},
    {"Not installed", "No instalado"},
    {"No pack in {}", "No hay ningún paquete en {}"},
    {"Import texture pack…", "Importar paquete de texturas…"},
    {"Open the textures folder", "Abrir la carpeta de texturas"},
    {"Show mods/textures in the data folder, where imported packs go.",
     "Muestra mods/textures, dentro de la carpeta de datos, adonde van los paquetes importados."},
    {"Timing", "Sincronización"},
    {"Vsync", "Vsync"},
    {"Off (mailbox)", "Desactivado (mailbox)"},
    {"Off (immediate)", "Desactivado (inmediato)"},
    {"On waits for the display's refresh and never tears. Off shows each frame at once; the game's speed is the "
     "same either way.",
     "Activado espera al refresco de la pantalla y nunca produce desgarros. Desactivado muestra cada fotograma "
     "al instante; la velocidad del juego es la misma en ambos casos."},
    {"Frame rate", "Fotogramas por segundo"},
    {"Match display", "Igual que la pantalla"},
    {"With Vsync on, no faster than the display refreshes.", "Con Vsync activado, no supera el refresco de la pantalla."},
    {"Lowered to keep the game at full speed; it tries the chosen rate again later.",
     "Reducida para mantener el juego a velocidad normal; más tarde se vuelve a intentar con la tasa elegida."},
    {"Lower when behind", "Reducir si va con retraso"},
    {"On lowers the frame rate by itself when presenting that often would slow the game. Off keeps the chosen "
     "rate, and the game may then run below full speed.",
     "Activado reduce los fotogramas por segundo por sí solo cuando mostrar tantos frenaría el juego. "
     "Desactivado mantiene la tasa elegida, y entonces el juego puede ir por debajo de la velocidad normal."},
    {"Game speed", "Velocidad del juego"},
    {"Game speed is Unlimited", "La velocidad del juego es Ilimitada"},
    {"Unlimited", "Ilimitada"},
    {"Normal", "Normal"},
    {"Normal holds the game to real time. Unlimited lets it run as fast as frames can be drawn, which also speeds "
     "up the game.",
     "Normal mantiene el juego en tiempo real. Ilimitada lo deja correr tan rápido como se puedan dibujar los "
     "fotogramas, lo que también acelera el juego."},
    {"Frame skip", "Salto de fotogramas"},
    {"Limit to 30 fps", "Limitar a 30 fps"},
    {"Limit to 30 fps is on", "Límite de 30 fps activado"},
    {"Draws every other frame: the game keeps its full speed and the picture shows 30 frames a second, with half "
     "the drawing work. For devices that cannot hold 60.",
     "Dibuja un fotograma de cada dos: el juego mantiene su velocidad normal y la imagen muestra 30 fotogramas "
     "por segundo, con la mitad del trabajo de dibujo. Para dispositivos que no aguantan 60."},
    {"Auto: when the game falls behind real time, the next frame is not drawn, so the game keeps its speed and only "
     "the picture shows fewer frames (never fewer than half). Off: every frame is drawn, and a slow scene runs slower.",
     "Automático: cuando el juego se retrasa respecto al tiempo real, no se dibuja el siguiente fotograma, de modo "
     "que el juego mantiene su velocidad y solo la imagen muestra menos fotogramas (nunca menos de la mitad). "
     "Desactivado: se dibuja cada fotograma, y una escena pesada va más lenta."},
    {"Fast loading", "Carga rápida"},
    {"Lets the game run ahead of real time while it loads and is silent, so loads take as long as the computer "
     "needs. Never during play, sound, movies or ad hoc play.",
     "Deja que el juego se adelante al tiempo real mientras carga en silencio, de modo que las cargas duran solo "
     "lo que necesita el equipo. Nunca durante la partida, con sonido, en vídeos ni en el juego ad hoc."},
    {"Performance", "Rendimiento"},
    {"Overlay", "Superposición"},
    {"Overlay and log", "Superposición y registro"},
    {"Log only", "Solo registro"},
    {"Frame times and speed in the top-left corner, and a [perf] line per second on the console. F3 shows or hides "
     "the overlay.",
     "Tiempos de fotograma y velocidad en la esquina superior izquierda, y una línea [perf] por segundo en la "
     "consola. F3 muestra u oculta la superposición."},
    {"Restore video defaults", "Restaurar valores predeterminados de vídeo"},
    {"Every setting on this page back to how {} ships.", "Todos los ajustes de esta página vuelven a como viene {}."},

    // Fonts.
    {"Text", "Texto"},
    {"Font", "Fuente"},
    {"Weight", "Grosor"},
    {"Regular", "Normal"},
    {"Bold", "Negrita"},
    {"Heavy", "Extranegrita"},
    {"Default (chosen font unreadable)", "Predeterminada (la fuente elegida no se puede leer)"},
    {"Thickens the strokes of the game's text. The game squeezes Latin letters to half width, which thins them; "
     "Bold makes up for it.",
     "Engrosa los trazos del texto del juego. El juego comprime las letras latinas a la mitad de su anchura, lo "
     "que las adelgaza; Negrita lo compensa."},
    {"Open the fonts folder", "Abrir la carpeta de fuentes"},
    {"The game's text changes as soon as you choose. Characters a font lacks come from the default; fonts in the "
     "fonts folder are listed first.",
     "El texto del juego cambia en cuanto eliges. Los caracteres que le faltan a una fuente se toman de la "
     "predeterminada; las fuentes de la carpeta fonts aparecen primero."},
    {"Japanese", "Japonés"},
    {"Your font, Japanese", "Tu fuente, japonés"},
    {"Your font", "Tu fuente"},
    {"Latin", "Latino"},
    {"Looking for installed fonts…", "Buscando fuentes instaladas…"},

    // Audio.
    {"Output", "Salida"},
    {"Volume", "Volumen"},
    {"Loudness of everything the game plays.", "El volumen de todo lo que reproduce el juego."},
    {"Mute", "Silenciar"},
    {"Silence the game without losing the volume setting.", "Silencia el juego sin perder el ajuste de volumen."},
    {"Device", "Dispositivo"},
    {"No audio device", "Ningún dispositivo de audio"},
    {"44100 Hz stereo, paused while this menu is open", "44100 Hz estéreo, en pausa mientras este menú está abierto"},
    {"44100 Hz stereo", "44100 Hz estéreo"},
    {"Restore audio defaults", "Restaurar valores predeterminados de audio"},
    {"Full volume, not muted.", "Volumen al máximo, sin silenciar."},

    // Controls.
    {"Gamepad", "Mando"},
    {"Connected", "Conectado"},
    {"No gamepad; the keyboard and mouse drive the game", "Sin mando; el teclado y el ratón controlan el juego"},
    {"Confirm button", "Botón de confirmar"},
    {"Bottom (Western)", "Inferior (occidental)"},
    {"Right (Japanese)", "Derecho (japonés)"},
    {"Which face button confirms, in the game and in this menu. The game's prompts show × to confirm and ○ to go "
     "back.",
     "Qué botón frontal confirma, en el juego y en este menú. Los avisos del juego muestran × para confirmar y ○ "
     "para volver."},
    {"Which face button confirms, in the game and in this menu. The game's prompts show ○ to confirm and × to go "
     "back.",
     "Qué botón frontal confirma, en el juego y en este menú. Los avisos del juego muestran ○ para confirmar y × "
     "para volver."},
    {"Stick dead zone", "Zona muerta del stick"},
    {"How far the left stick moves before the game sees it. Raise it if the character drifts.",
     "Cuánto se mueve el stick izquierdo antes de que el juego lo detecte. Auméntala si el personaje se mueve "
     "solo."},
    {"Trigger point", "Punto de los gatillos"},
    {"How far LT/RT (L2/R2) travel before they press anything.",
     "Cuánto recorrido necesitan LT/RT (L2/R2) antes de pulsar algo."},
    {"Trigger profile", "Perfil de los gatillos"},
    {"Standard (L / R)", "Estándar (L / R)"},
    {"What LT/RT (L2/R2) press. Standard: L and R, like the shoulders.",
     "Qué pulsan LT/RT (L2/R2). Estándar: L y R, como los botones superiores."},
    {"Right stick", "Stick derecho"},
    {"Camera", "Cámara"},
    {"D-pad", "Cruceta"},
    {"Analog camera", "Cámara analógica"},
    {"Camera speed", "Velocidad de la cámara"},
    {"How fast the camera turns at full deflection, in degrees a second.",
     "Con qué rapidez gira la cámara con el stick a tope, en grados por segundo."},
    {"Invert camera horizontally", "Invertir cámara en horizontal"},
    {"Turn the camera the other way left and right.", "Gira la cámara en sentido contrario a izquierda y derecha."},
    {"Invert camera vertically", "Invertir cámara en vertical"},
    {"Turn the camera the other way up and down.", "Gira la cámara en sentido contrario arriba y abajo."},
    {"Right stick is not the camera", "El stick derecho no es la cámara"},
    {"Analog camera is off", "La cámara analógica está desactivada"},
    {"Right stick is not the D-pad", "El stick derecho no es la cruceta"},
    {"Right stick D-pad point", "Punto de la cruceta en el stick derecho"},
    {"How far the right stick moves before it presses the D-pad.",
     "Cuánto se mueve el stick derecho antes de pulsar la cruceta."},
    {"When the game asks for a name", "Cuando el juego pide un nombre"},
    {"On-screen keyboard", "Teclado en pantalla"},
    {"Use the name below", "Usar el nombre de abajo"},
    {"On-screen keyboard: type the name with the gamepad or the keyboard while the game waits. Otherwise the name "
     "below is given at once.",
     "Teclado en pantalla: escribe el nombre con el mando o el teclado mientras el juego espera. Si no, se usa al "
     "instante el nombre de abajo."},
    {"Keyboard and mouse", "Teclado y ratón"},
    {"While the game runs, the window takes the pointer: moving the mouse turns the camera and its buttons press "
     "what they are bound to. Esc opens this menu and gives the pointer back.",
     "Mientras el juego se ejecuta, la ventana captura el puntero: mover el ratón gira la cámara y sus botones "
     "pulsan aquello a lo que están asignados. Esc abre este menú y devuelve el puntero."},
    {"Mouse", "Ratón"},
    {"Mouse is off", "El ratón está desactivado"},
    {"Mouse sensitivity", "Sensibilidad del ratón"},
    {"Invert mouse horizontally", "Invertir ratón en horizontal"},
    {"Turn the camera the other way when the mouse moves sideways.",
     "Gira la cámara en sentido contrario cuando el ratón se mueve hacia los lados."},
    {"Invert mouse vertically", "Invertir ratón en vertical"},
    {"Push the mouse forward to look down instead of up.", "Empuja el ratón hacia delante para mirar hacia abajo en lugar de hacia arriba."},
    {"Press a key or a mouse button", "Pulsa una tecla o un botón del ratón"},
    {"Press a key or a mouse button to add it, or one it has already to remove it; Esc cancels. A key taken from "
     "another control leaves that one.",
     "Pulsa una tecla o un botón del ratón para añadirlo, o uno que ya tenga para quitarlo; Esc cancela. Una "
     "tecla tomada de otro control deja de pertenecer a ese."},
    {"This menu", "Este menú"},
    {"Performance overlay", "Superposición de rendimiento"},
    {"Restore control defaults", "Restaurar valores predeterminados de los controles"},
    {"Every gamepad, keyboard, mouse, touch and name setting back to how {} ships.",
     "Todos los ajustes de mando, teclado, ratón, pantalla táctil y nombre vuelven a como viene {}."},
    {"Touch screen", "Pantalla táctil"},
    {"On-screen controls", "Controles en pantalla"},
    {"On-screen controls are off", "Los controles en pantalla están desactivados"},
    {"Controls opacity", "Opacidad de los controles"},
    {"How strongly the on-screen controls are drawn.", "Con qué intensidad se dibujan los controles en pantalla."},
    {"Controls size", "Tamaño de los controles"},
    {"The size of the on-screen controls.", "El tamaño de los controles en pantalla."},
    {"Touch camera speed", "Velocidad de la cámara táctil"},
    {"Degrees the camera turns for a drag across the height of the screen.",
     "Grados que gira la cámara al arrastrar el dedo a lo alto de la pantalla."},
    {"Use the classic keyboard layout", "Usar la distribución de teclado clásica"},
    {"Tilt controls", "Controles por inclinación"},
    {"Up", "Arriba"},
    {"Down", "Abajo"},
    {"Left", "Izquierda"},
    {"Right", "Derecha"},
    {"Cross", "Equis"},
    {"Circle", "Círculo"},
    {"Square", "Cuadrado"},
    {"Triangle", "Triángulo"},
    {"Start", "Start"},
    {"Select (PSP)", "Select (PSP)"},

    // System.
    {"Game", "Juego"},
    {"Back to the game.", "Volver al juego."},
    {"Pause the game when the menu opens", "Pausar el juego al abrir el menú"},
    {"On: the game stops while this menu is open. Off: it keeps running and playing sound behind the menu, which "
     "takes all input. Applies the next time the menu opens.",
     "Activado: el juego se detiene mientras este menú está abierto. Desactivado: sigue ejecutándose y "
     "reproduciendo sonido detrás del menú, que recibe todos los controles. Se aplica la próxima vez que se abra "
     "el menú."},
    {"Show the launcher at start", "Mostrar el lanzador al iniciar"},
    {"On: the launcher, with its Play button and settings, comes up before the game. Off: the game starts at once. "
     "Applies the next time the game starts.",
     "Activado: el lanzador, con su botón Jugar y sus ajustes, aparece antes del juego. Desactivado: el juego "
     "arranca directamente. Se aplica la próxima vez que arranque el juego."},
    {"Language", "Idioma"},
    {"The language of this menu and the launcher. The game's own text is not changed.",
     "El idioma de este menú y del lanzador. El texto del propio juego no cambia."},
    {"Interface language", "Idioma de la interfaz"},
    {"Game language", "Idioma del juego"},
    {"The language the game itself plays in: its text, as far as the disc has it. Applies the next time the game starts.",
     "El idioma en el que se juega el propio juego: sus textos, en la medida en que el disco los incluye. Se "
     "aplica la próxima vez que arranque el juego."},
    {"Open the data folder", "Abrir la carpeta de datos"},
    {"Show {}'s data folder in the file manager.", "Muestra la carpeta de datos de {} en el gestor de archivos."},
    {"Set up game data again…", "Volver a configurar los datos del juego…"},
    {"Choose the disc image again, for example after moving it. The game closes first.",
     "Elige de nuevo la imagen de disco, por ejemplo después de moverla. Antes se cierra el juego."},
    {"Quit game", "Salir del juego"},
    {"Close {}. Progress since your last save is lost.", "Cierra {}. Se pierde el progreso desde la última partida guardada."},
    {"Saves", "Partidas guardadas"},
    {"About", "Acerca de"},
    {"Build", "Compilación"},
    {"Data folder", "Carpeta de datos"},
    {"Saves folder", "Carpeta de partidas guardadas"},
    {"Graphics", "Gráficos"},
    {"Interface", "Interfaz"},
    {"Quit the game?", "¿Salir del juego?"},
    {"Set up game data again?", "¿Volver a configurar los datos del juego?"},
    {"Progress since your last save is lost.", "Se pierde el progreso desde la última partida guardada."},
    {"{} closes the game and opens the setup, where you choose the disc image again. Progress since your last save "
     "is lost.",
     "{} cierra el juego y abre la configuración, donde eliges de nuevo la imagen de disco. Se pierde el progreso "
     "desde la última partida guardada."},
    {"Close and set up", "Cerrar y configurar"},
    {"Set by {}", "Establecido por {}"},
    {"Save the log…", "Guardar el registro…"},
    {"Log", "Registro"},

    // Saves.
    {"Import save…", "Importar partida guardada…"},
    {"Export save…", "Exportar partida guardada…"},
    {"Back up saves…", "Hacer copia de seguridad de las partidas…"},
    {"Open the saves folder", "Abrir la carpeta de partidas guardadas"},
    {"Show the folder the game saves to (PSP/SAVEDATA) in the file manager.",
     "Muestra en el gestor de archivos la carpeta donde guarda el juego (PSP/SAVEDATA)."},
    {"Copy a save from a PSP memory stick, PPSSPP or another installation: choose its folder or the PSP/SAVEDATA "
     "folder that holds it. A save it replaces is kept, not deleted.",
     "Copia una partida guardada de un Memory Stick de PSP, de PPSSPP o de otra instalación: elige su carpeta o la "
     "carpeta PSP/SAVEDATA que la contiene. La partida que sustituye se conserva, no se borra."},
    {"Copy your game data and downloaded quests to a folder you choose, to take them to a PSP or another machine.",
     "Copia tus datos de juego y las misiones descargadas a una carpeta que elijas, para llevarlos a una PSP o a "
     "otro equipo."},
    {"Copy all of this game's saves, the install data included, to the backups folder or a folder you choose.",
     "Copia todas las partidas guardadas de este juego, incluidos los datos de instalación, a la carpeta de copias "
     "de seguridad o a una carpeta que elijas."},
    {"No folders here.", "No hay carpetas aquí."},
    {"Import from this folder", "Importar desde esta carpeta"},
    {"Export to this folder", "Exportar a esta carpeta"},
    {"Back up to this folder", "Hacer copia en esta carpeta"},
    {"Import: open a save folder, or choose a folder that holds them, such as a memory stick's PSP/SAVEDATA.",
     "Importar: abre una carpeta de partida guardada, o elige una carpeta que las contenga, como la PSP/SAVEDATA "
     "de un Memory Stick."},
    {"Export: choose the folder to copy your saves to.", "Exportar: elige la carpeta a la que copiar tus partidas guardadas."},
    {"Back up: choose the folder the backup goes to.", "Copia de seguridad: elige la carpeta donde se guardará la copia."},
    {"Import saves", "Importar partidas guardadas"},
    {"Save to import", "Partida guardada a importar"},
    {"Current save", "Partida guardada actual"},
    {"Replace and import", "Reemplazar e importar"},
    {"Import this save", "Importar esta partida guardada"},
    {"Import these saves", "Importar estas partidas guardadas"},
    {"Choose another folder", "Elegir otra carpeta"},
    {"Back to the folders.", "Volver a las carpetas."},
    {"Import nothing.", "No importar nada."},
    {"Imported", "Importado"},
    {"Imported; the old save was kept", "Importado; se ha conservado la partida guardada anterior"},
    {"The game reads its saves at the title screen. Restart now to load the imported save; progress since your "
     "last save is lost. If you keep playing instead, do not save before you restart: saving would replace the "
     "imported save with the game you are playing.",
     "El juego lee las partidas guardadas en la pantalla de título. Reinicia ahora para cargar la partida "
     "importada; se pierde el progreso desde tu última partida guardada. Si prefieres seguir jugando, no guardes "
     "antes de reiniciar: al guardar, la partida importada se sustituiría por la partida que estás jugando."},
    {"Restart now", "Reiniciar ahora"},
    {"Closes the game and starts it again at the title screen.", "Cierra el juego y lo vuelve a iniciar en la pantalla de título."},
    {"Back to the menu.", "Volver al menú."},
    {"Export saves", "Exportar partidas guardadas"},
    {"Exported", "Exportado"},
    {"Encrypted for a PSP", "Cifrado para PSP"},
    {"To", "A"},
    {"The folder is laid out like a memory stick: copy its PSP folder to the root of a PSP's memory stick, or "
     "import it from this menu on another machine.",
     "La carpeta tiene la estructura de un Memory Stick: copia su carpeta PSP a la raíz del Memory Stick de una "
     "PSP, o impórtala desde este menú en otro equipo."},
    {"Not exported", "No exportado"},
    {"Back up saves", "Copia de seguridad de las partidas"},
    {"There is no save to back up yet.", "Todavía no hay ninguna partida guardada de la que hacer copia."},
    {"Add a timestamp to the backup name", "Añadir fecha y hora al nombre de la copia"},
    {"On: every backup is a new folder named by its date and time, such as 2026-09-19_19-05-12, holding the save "
     "folders. Off: the save folders go straight into the folder you choose, and an earlier backup there is "
     "replaced after asking.",
     "Activado: cada copia es una carpeta nueva con su fecha y hora, como 2026-09-19_19-05-12, que contiene las "
     "carpetas de las partidas. Desactivado: las carpetas de las partidas van directamente a la carpeta que "
     "elijas, y una copia anterior que haya allí se sustituye tras preguntar."},
    {"Back up to the backups folder", "Hacer copia en la carpeta de copias"},
    {"Back up to another folder…", "Hacer copia en otra carpeta…"},
    {"Choose where the backup goes.", "Elige dónde se guarda la copia."},
    {"Open the backups folder", "Abrir la carpeta de copias"},
    {"Replace the earlier backup?", "¿Reemplazar la copia anterior?"},
    {"Keep the earlier backup.", "Conservar la copia anterior."},
    {"Replace the backup", "Reemplazar la copia"},
    {"The earlier backup there is replaced.", "Se reemplaza la copia anterior que hay allí."},
    {"Backed up", "Copia realizada"},
    {"Not backed up", "Copia no realizada"},
    {"Open the folder", "Abrir la carpeta"},
    {"Show the backup in the file manager.", "Muestra la copia en el gestor de archivos."},

    // Texture packs.
    {"Import texture pack", "Importar paquete de texturas"},
    {"Pack to import", "Paquete a importar"},
    {"No texture pack in this folder", "No hay ningún paquete de texturas en esta carpeta"},
    {"Ready to install", "Listo para instalar"},
    {"This pack cannot be used", "Este paquete no se puede usar"},
    {"{} textures, {}", "{} texturas, {}"},
    {"made for {}, works on {}", "hecho para {}, funciona en {}"},
    {"{} images missing: those textures keep the game's own look.",
     "Faltan {} imágenes: esas texturas conservan el aspecto original del juego."},
    {"Install", "Instalar"},
    {"Copies {} to mods/textures/{} in the data folder ({} free).",
     "Copia {} en mods/textures/{} de la carpeta de datos ({} libres)."},
    {"Copies {} to mods/textures/{} in the data folder.", "Copia {} en mods/textures/{} de la carpeta de datos."},
    {"The pack there now is kept as a backup.", "El paquete que hay ahora allí se conserva como copia de seguridad."},
    {"Not enough free space: the copy needs {} and {} is free. Use it where it is instead.",
     "No hay espacio libre suficiente: la copia necesita {} y hay {} libres. Úsalo donde está."},
    {"Copy into the data folder", "Copiar a la carpeta de datos"},
    {"Reads the pack from its folder and copies nothing, saving {}. The folder must stay where it is.",
     "Lee el paquete desde su carpeta y no copia nada, con lo que se ahorran {}. La carpeta debe quedarse donde "
     "está."},
    {"Does not load, {}", "No se carga, {}"},
    {"Folder", "Carpeta"},
    {"Textures", "Texturas"},
    {"Images", "Imágenes"},
    {"Missing images", "Imágenes que faltan"},
    {"textures.ini names images that are not in the folder; those textures keep the game's own look.",
     "textures.ini menciona imágenes que no están en la carpeta; esas texturas conservan el aspecto original del "
     "juego."},
    {"In use now", "En uso ahora"},
    {"Installed pack", "Paquete instalado"},
    {"Pack folder", "Carpeta del paquete"},
    {"Used from", "Usado desde"},
    {"This is the installed pack already.", "Este ya es el paquete instalado."},
    {"Copy and replace", "Copiar y reemplazar"},
    {"This pack is the one in use already.", "Este paquete ya es el que está en uso."},
    {"Use it where it is", "Usarlo donde está"},
    {"Putting the pack in place", "Colocando el paquete en su sitio"},
    {"Copying texture pack", "Copiando el paquete de texturas"},
    {"The pack in use now stays as it is until the copy is complete. The menu stays open until then.",
     "El paquete en uso se queda como está hasta que termine la copia. El menú permanece abierto hasta entonces."},
    {"Cancelling…", "Cancelando…"},
    {"Stops the copy and removes what it has copied so far. Nothing else changes.",
     "Detiene la copia y elimina lo que se haya copiado hasta ahora. No cambia nada más."},
    {"Installed", "Instalado"},
    {"Installed in", "Instalado en"},
    {"Replaced pack", "Paquete reemplazado"},
    {"The pack is on and applies at once: textures already on screen change within a frame or two.",
     "El paquete está activado y se aplica al instante: las texturas que ya están en pantalla cambian en un par "
     "de fotogramas."},
    {"Not imported", "No importado"},
    {"Cancelled", "Cancelado"},
    {"Nothing changed: the pack in use before is still in place.",
     "No ha cambiado nada: el paquete que se usaba antes sigue en su sitio."},
    {"Show the folder the pack is in.", "Muestra la carpeta donde está el paquete."},
    {"Pack used from", "Paquete usado desde"},
    {"Stop using the pack folder", "Dejar de usar la carpeta del paquete"},
    {"Go back to the pack installed in the data folder, if any. The pack's own folder is left alone.",
     "Vuelve al paquete instalado en la carpeta de datos, si lo hay. La carpeta del propio paquete no se toca."},
    {"Does not load", "No se carga"},
    {"Install an HD texture pack from a folder: the one that holds textures.ini, or one that holds it in "
     "textures/{} or PSP/TEXTURES. It is checked first; the pack it replaces is kept.",
     "Instala un paquete de texturas HD desde una carpeta: la que contiene textures.ini, o una que lo contenga en "
     "textures/{} o PSP/TEXTURES. Se comprueba antes; el paquete al que sustituye se conserva."},
    {"Pick the pack's folder (the one that holds textures.ini, or one that holds it in PSP/TEXTURES/{}) in "
     "Android's file picker. It is copied into the game's data folder and checked; the pack it replaces is kept.",
     "Elige la carpeta del paquete (la que contiene textures.ini, o una que lo contenga en PSP/TEXTURES/{}) en el "
     "selector de archivos de Android. Se copia a la carpeta de datos del juego y se comprueba; el paquete al que "
     "sustituye se conserva."},
    {"Looking for the pack…", "Buscando el paquete…"},
    {"Import: open the pack's folder, the one that holds textures.ini, or choose a folder that holds it, such as "
     "PPSSPP's PSP/TEXTURES. You can also drop the folder on the window.",
     "Importar: abre la carpeta del paquete, la que contiene textures.ini, o elige una carpeta que la contenga, "
     "como la PSP/TEXTURES de PPSSPP. También puedes arrastrar la carpeta a la ventana."},

    // The file browser.
    {"Home", "Inicio"},
    {"Desktop", "Escritorio"},
    {"Documents", "Documentos"},
    {"Downloads", "Descargas"},
    {"Parent folder", "Carpeta superior"},
    {"Showing all files", "Mostrando todos los archivos"},
    {"System dialog…", "Diálogo del sistema…"},
    {"Disc images (*.iso)", "Imágenes de disco (*.iso)"},
    {"All files", "Todos los archivos"},

    // The launcher.
    {"PLAY", "JUGAR"},
    {"QUICK SETTINGS", "AJUSTES RÁPIDOS"},
    {"Back up saves before playing", "Copia de seguridad de las partidas al jugar"},
    {"Copies your saves to the backups folder in the data folder each time you press Play; the newest ten are kept.",
     "Copia tus partidas guardadas a la carpeta backups, dentro de la carpeta de datos, cada vez que pulsas "
     "Jugar; se conservan las diez más recientes."},
    {"Show this launcher at start", "Mostrar este lanzador al iniciar"},
    {"No: the game starts at once. Start with --launcher to see this screen again.",
     "No: el juego arranca directamente. Inicia con --launcher para volver a ver esta pantalla."},
    {"In the game: Esc, or L3+R3 on a gamepad, opens the port's menu.",
     "En el juego: Esc, o L3+R3 en un mando, abre el menú del port."},
    {"Project page", "Página del proyecto"},
    {"Report a problem", "Informar de un problema"},
    {"Your disc image could not be read.", "No se ha podido leer la imagen de disco."},
    {"System & saves", "Sistema y partidas"},
    {"An unofficial port, played from your own copy of the game.",
     "Un port no oficial, que se juega con tu propia copia del juego."},
};

const std::size_t kSpanishCount = sizeof(kSpanish) / sizeof(kSpanish[0]);

} // namespace portablekit::ui
