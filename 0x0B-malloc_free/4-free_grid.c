#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2D grid created by alloc_grid
 * @grid: grid to free
 * @height: grid height
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int m;

	if (grid == NULL || height <= 0)
		return;
	for (m = 0; m < height; m++)
		free(grid[m]);
	free(grid);
}
