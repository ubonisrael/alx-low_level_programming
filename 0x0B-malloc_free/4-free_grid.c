#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: 2D grid
 * @height: height of grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int x = 0;

	for (; x < height; x++)
		free(grid[x]);
	free(grid);
}
