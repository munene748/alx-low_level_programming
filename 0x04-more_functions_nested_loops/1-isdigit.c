#include "main.h"
#include <stdio.h>

int _isdigit(int c) {
    return c >= '0' && c <= '9';
}

int main() {
    char test_char = '5';
    if (_isdigit(test_char))
        printf("%c is a digit.\n", test_char);
    else
        printf("%c is not a digit.\n", test_char);

    return 0;
}

