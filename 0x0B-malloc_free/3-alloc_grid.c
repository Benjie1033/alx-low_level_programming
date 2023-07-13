# include "main.h"
# include <stdlib.h>

/**
 * alloc_grid - print pointer to 2D array
 * @width: width of the array
 * @height: height of the array
 * Return: NULL
 */

int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **v;

	if (width <= 0 || height <= 0)
		return (NULL);
	v = malloc(sizeof(int *) * height);

	if (v == NULL)
	{
		free(v);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		v[i] = malloc(sizeof(int) * width);

		if (v[i] == NULL)
		{
			for (j = 0; j >= 0; j++)
			{
			free(v[j]);
			}
			free(v);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			v[k][l] = 0;
		}
	}
	return (v);

}
