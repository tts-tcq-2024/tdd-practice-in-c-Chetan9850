// StringCalculator.c

#include "StringCalculator.h"
#include <stdlib.h>
#include <string.h>

int add(const char* input) {
    if (input == NULL || strcmp(input, "") == 0) {
        return 0;
    }

    int sum = 0;
    char delimiter = ',';
    const char* numbers = input;

    // Handle custom delimiter
    if (input[0] == '/' && input[1] == '/') {
        delimiter = input[2];
        numbers = input + 4; // Skip "//[delimiter]\n"
    }

    // Tokenize the input string
    char* token = strtok((char*)numbers, ",\n");
    while (token != NULL) {
        int num = atoi(token);
        if (num <= 1000) {
            sum += num;
        }
        token = strtok(NULL, ",\n");
    }

    return sum;
}
