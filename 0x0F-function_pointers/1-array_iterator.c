#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Iterates through an array and performs an action on each element.
 * @array: The array to iterate through.
 * @size: The number of elements in the array.
 * @action: Pointer to the function that defines the action to be performed.
 *
 * Description: This function takes an array, its size, and a function pointer as
 * parameters. It iterates through the array and applies the specified action
 * function to each element of the array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    unsigned int i;

    if (array == NULL || action == NULL)
        return;

    for (i = 0; i < size; i++)
    {
        action(array[i]);
    }
}

