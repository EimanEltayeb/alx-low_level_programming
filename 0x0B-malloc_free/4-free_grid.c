#include "main.h"
/**
 * free_grid - t frees a 2 dimensional grid
 * @grid: pointer
 * @height: input
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
