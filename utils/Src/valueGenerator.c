#include "valueGenerator.h"

void swap_number(int *min, int *max);

void swap_number(int *min, int *max) {
    int temp;
    temp = (*max);
    (*max) = (*min);
    (*min) = temp;
}

int generate_random_number() {
    srand((unsigned int)time(NULL));
    return rand();
}

int generate_random_number_in_range(int min, int max) {
    if (min > max) {
        swap_number(&min, &max);
    }

    return generate_random_number() % (max - min + 1) + min;
}


