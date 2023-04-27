#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees 2d array
 *
 * @grid: 2d grid
 * @height: height dimension of grid
 *
 * Return: null
 *
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i ; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

