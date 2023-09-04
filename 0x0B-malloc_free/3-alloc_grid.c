# include "main.h"

/**
 * alloc_grid - function that returns a 2D array
 * @width: width of the array
 * @height: height of the array
 * Return: 2D array
 */

int **alloc_grid(int width, int height)
{
	int **m;
	int y, z;

	if (width <= 0 || height <= 0)
		return (NULL);

	m = malloc(sizeof(int *) * height);

	if (m == NULL)
		return (NULL);

	for (y = 0; y < height; y++)
	{
		m[y] = malloc(sizeof(int) * width);

		if (m[y] == NULL)
		{
			for (; y >= 0; y--)
				free(m[y]);

			free(m);
			return (NULL);
		}
	}
	for (y = 0; y < height; y++)
	{
		for (z = 0; z < width; z++)
			m[y][z] = 0;
	}
	return (m);
}
