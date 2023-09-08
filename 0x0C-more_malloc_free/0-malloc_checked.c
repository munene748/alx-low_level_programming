#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @n: Number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory.
 * If malloc fails, it terminates the program with status value 98.
 */
void *malloc_checked(unsigned int n)
{
    void *m = malloc(n);

    if (m == NULL)
    {
        _exit(98);
    }

    return (m);
}

