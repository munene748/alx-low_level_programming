#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Allocate a 2D grid of integers.
 * @width: Width of the grid.
 * @height: Height of the grid.
 *
 * Return: Pointer to the allocated 2D array or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **ethan;
	int d, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	ethan = malloc(sizeof(int *) * height);

	if (ethan == NULL)
		return (NULL);

	for (d = 0; d < height; d++)
	{
		ethan[d] = malloc(sizeof(int) * width);

		if (ethan[d] == NULL)
		{
			for (; d >= 0; d--)
				free(ethan[d]);
			free(ethan);
			return (NULL);
		}
	}

	for (d = 0; d < height; d++)
	{
		for (k = 0; k < width; k++)
			ethan[d][k] = 0;
	}

	return (ethan);
}

