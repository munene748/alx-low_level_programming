#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - Convert a binary number to an unsigned int.
 * @b: A pointer to the binary string.
 *
 * Return: The converted number, or 0 if an error.
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int m = 0;

    if (b == NULL)
        return (0);

    while (*b)
    {
        if (*b != '0' && *b != '1')
            return (0);

        m = (m << 1) | (*b - '0');
        b++;
    }

    return (m);
}

