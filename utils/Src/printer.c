#include "printer.h"

void print_int(int num) {
    printf("%d\n", num);
}

void print_float(float num) {
    printf("%f\n", num);
}

void print_double(double num) {
    printf("%lf\n", num);
}

void print_char(char c) {
    printf("%c\n", c);
}

void print_string(char* str) {
    printf("%s\n", str);
}
void print_error(char* str) {
    fprintf(stderr,  str);
}