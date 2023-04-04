project(utils)

# Добавление исходных файлов библиотеки
set(LIBRARY_SOURCE_FILES Src/memorySimulator.c Inc/memorySimulator.h Src/valueGenerator.c Inc/valueGenerator.h Src/printer.c Inc/printer.h)

# Создание библиотеки
add_library(utils_library ${LIBRARY_SOURCE_FILES})

include_directories(Inc)

# Настройка пути для заголовочных файлов
target_include_directories(utils_library PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Inc)