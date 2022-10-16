#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees the memory allocate for the grid
 * created by alloc_grid()
 * @grid: grid to free
 * @height: height of the grid
 */

void free_grid(int **grid, int height)
{
	int e;

	if (grid == NULL || height == 0)
		return;
	for (e = 0; e < height; e++)
		free(grid[e]);
	free(grid);
}
