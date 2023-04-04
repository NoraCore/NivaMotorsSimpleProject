#ifndef NIVAMOTORSSIMPLEPROJECT_MAIN_H
#define NIVAMOTORSSIMPLEPROJECT_MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "memorySimulator.h"
#include "printer.h"
#include "valueGenerator.h"

#define FILENAME1 "file1.txt"
#define FILENAME2 "file2.txt"

#define MIN_NUMBER 0
#define MAX_NUMBER 1000

#define DELAY_SECONDS 1
#define MAX_VALUES_NUMBER 10

#define ERROR_MESSAGE "Something wrong"


static void Delay_Seconds(unsigned int seconds);
static void Error_Handler(void);

#endif //NIVAMOTORSSIMPLEPROJECT_MAIN_H
