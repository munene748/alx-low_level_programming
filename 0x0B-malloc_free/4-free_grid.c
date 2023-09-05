#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid.
 * @grid: Pointer to the 2D grid.
 * @height: Height of the grid.
 */
void free_grid(int **grid, int height)
{
	int d; /* Declare d outside of the loop */

	if (grid == NULL || height <= 0)
		return;

	for (d = 0; d < height; d++) /* Initialize d here */
	{
		free(grid[d]);
	}

	free(grid);
}

