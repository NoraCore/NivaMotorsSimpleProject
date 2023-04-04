project(executable_main_project)

set(EXECUTABLE_SOURCE_FILES main.c)

add_executable(${PROJECT_NAME} Src/main.c Inc/main.h)

include_directories(Inc)
# Подключение библиотеки
target_include_directories(${PROJECT_NAME} PRIVATE ../simulator/Inc)
target_link_libraries(${PROJECT_NAME} utils_library)