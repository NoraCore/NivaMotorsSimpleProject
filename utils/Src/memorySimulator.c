#include "memorySimulator.h"

#define MEMORY_NOT_INIT (-1)
#define MEMORY_NOT_AVAILABLE (-2)

int init_memory(const char* filename){
    FILE* filePtr = fopen(filename, "w");
    if (filePtr == NULL) {
        return MEMORY_NOT_INIT; //если не удалось создать файл
    }
    fclose(filePtr);
    return 0; // если файл успешно создан

}

int save_value_to_memory(const char* filename, int value) {
    FILE* filePtr = fopen(filename, "a"); // Открываем файл в режиме дозаписи

    if (filePtr == NULL) {
        return MEMORY_NOT_AVAILABLE; // Возвращаем код ошибки
    }

    fprintf(filePtr, "%d\n", value); // Записываем значение в файл
    fclose(filePtr); // Закрываем файл

    return 0; // Возвращаем успешное выполнение
}

int clear_memory(const char* filename) {
    FILE* fp = fopen(filename, "w"); // Открываем файл в режиме перезаписи
    if (fp == NULL) {
        return MEMORY_NOT_AVAILABLE; // Возвращаем код ошибки
    }

    fclose(fp); // Закрываем файл

    return 0; // Возвращаем 0, если успешное выполнение
}