# include "main.h"
# include <stdlib.h>

/**
 * free_grid - function to clear 2D array
 * @grid: 2D work place
 * @height: height of array
 * Return: null
 */

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
