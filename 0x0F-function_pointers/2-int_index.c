#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array using a comparison function.
 * @array: The array to search.
 * @size: The number of elements in the array.
 * @cmp: Pointer to the comparison function.
 * Return: The index of the first element for which the comparison function returns true,
 *         or -1 if no such element is found or if input is invalid.
 *
 * Description: This function takes an array, its size, and a comparison function pointer
 * as parameters. It searches for an element in the array that satisfies the comparison
 * function and returns its index.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
    int i;

    if (array == NULL || size <= 0 || cmp == NULL)
        return (-1);

    for (i = 0; i < size; i++)
    {
        if (cmp(array[i]))
            return (i);
    }
    return (-1);
}

