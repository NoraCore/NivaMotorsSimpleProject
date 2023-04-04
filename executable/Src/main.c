#include "main.h"

int main(int argc, char *argv[]) {
    // files initialization and error checking
    if (init_memory(FILENAME1) != 0) {
        Error_Handler();
    }
    if (init_memory(FILENAME2) != 0) {
        Error_Handler();
    }

    int value;
    uint32_t counter = 0;
    time_t current_time;
    struct tm *time_info;
    char time_string[9];

    while (1) {
        counter++;

        // generate a random number between 0 and 1000
        value = generate_random_number_in_range(MIN_NUMBER, MAX_NUMBER); // генерация случайного числа от 0 до 99

        // save the value to file 1 and check for errors
        if (save_value_to_memory(FILENAME1, value) != 0) {
            Error_Handler();
        }

        // get current time
        time(&current_time);
        // convert to local time
        time_info = localtime(&current_time);
        strftime(time_string, sizeof(time_string), "%S", time_info); // получение строки с секундами

        // print the time string and value to the screen
        print_string(time_string);
        print_int(value);

        // check for even seconds and save the value to file 2
        if (atoi(time_string) % 2 == 0) {
            if (save_value_to_memory(FILENAME2, value) != 0) {
                Error_Handler();
            }

        }

        // if 10 values are saved, clear data from file 1
        if (counter >= MAX_VALUES_NUMBER) {
            counter = 0;
            if (clear_memory(FILENAME1) != 0) {
                Error_Handler();
            }
        }

        // delay for DELAY_SECONDS seconds
        Delay_Seconds(DELAY_SECONDS);
    }
}

// function to delay for 'seconds' seconds
static void Delay_Seconds(unsigned int seconds) {
    sleep(seconds);
}

// error handling function
static void Error_Handler(void) {
    // print error message to the screen
    print_error(ERROR_MESSAGE);

    // exit program with failure status
    exit(EXIT_FAILURE);
}

