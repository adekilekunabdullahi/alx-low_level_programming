#include "main.h"
#include <stdlib.h>
/**
 *free_grid - function that frees a 2 dimensional grid previously created by
 *your alloc_grid function.
 *@grid: grid
 *@height: number of column
 */
void free_grid(int **grid, int height)
{
	if (grid <= 0 || height <= 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
