#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* free_grid - Frees 2D created by alloc_grid
* @grid: Name of 2D
* @height: Height of the grid
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
	free(grid[i]);
	}
	free(grid);
}
