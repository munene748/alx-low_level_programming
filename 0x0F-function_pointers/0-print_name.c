#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using a pointer to a function.
 * @name: The string to be printed.
 * @f: Pointer to the function that prints the name.
 *
 * Description: This function takes a name and a function pointer as
 * parameters. If the name and function pointer are valid (not NULL),
 * the function pointer is used to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
    if (name == NULL || f == NULL)
        return;

    f(name);
}
}

