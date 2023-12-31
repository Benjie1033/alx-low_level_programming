# include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: the grids
 * @height: heights of the grids
 * Return: 0;
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
