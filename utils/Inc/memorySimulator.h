#ifndef NIVAMOTORSSIMPLEPROJECT_MEMORYSIMULATOR_H
#define NIVAMOTORSSIMPLEPROJECT_MEMORYSIMULATOR_H

#include <stdio.h>

// Функция сохранения значения value в файл filename
int save_value_to_memory(const char* filename, int value);

// Функция создания файла с именем filename
int init_memory(const char* filename);

// Функция очистки файла filename
int clear_memory(const char* filename);

#endif //NIVAMOTORSSIMPLEPROJECT_MEMORYSIMULATOR_H
