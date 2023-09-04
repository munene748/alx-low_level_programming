#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * my_strdup - duplicate a string to new memory space location
 * @original: The original string to be duplicated
 * Return: A pointer to the newly duplicated string or NULL if allocation fails.
 */
char *my_strdup(char *original)
{
    char *duplicate;
    int length = 0;
    int i;

    if (original == NULL)
        return NULL;

    /* Calculate the length of the original string */
    while (original[length] != '\0')
        length++;

    /* Allocate memory for the duplicated string */
    duplicate = (char *)malloc(sizeof(char) * (length + 1));

    if (duplicate == NULL)
        return NULL;

    /* Copy the characters from the original string to the duplicated string */
    for (i = 0; i < length; i++)
        duplicate[i] = original[i];

    /* Null-terminate the duplicated string */
    duplicate[length] = '\0';

    return duplicate;
}

