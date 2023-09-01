#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int check_num(char *str) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (!isdigit(str[i])) {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char *argv[]) {
    int i, sum = 0;
    
    if (argc < 2) {
        printf("Usage: %s <num1> <num2> ... <numN>\n", argv[0]);
        return 1;
    }

    for (i = 1; i < argc; i++) {
        if (check_num(argv[i])) {
            int str_to_int = atoi(argv[i]);
            sum += str_to_int;
        } else {
            printf("Error: Argument %d is not a valid integer\n", i);
            return 1;
        }
    }

    printf("Sum: %d\n", sum);

    return 0;
}

