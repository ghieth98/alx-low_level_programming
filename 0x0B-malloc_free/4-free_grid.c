#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees 2 dimesional grid
 * @grid: pointer to 2d array
 * @height: hieght of array
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		free(grid);

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
