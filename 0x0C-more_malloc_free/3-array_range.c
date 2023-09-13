#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the newly created array,
 *         NULL if max is greater than min or if malloc fails
 */
int *array_range(int min, int max)
{
	int *intArray;
	int n;

	if (min > max)
		return (NULL);

	intArray = malloc(sizeof(*intArray) * ((max - min) + 1));
	if (intArray == NULL)
		return (NULL);

	for (n = 0; min <= max; n++, min++)
		intArray[n] = min;

	return (intArray);
}

