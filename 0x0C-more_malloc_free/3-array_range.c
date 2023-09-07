#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored
 *
 * Return: 0
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, dimen;

	if (min > max)
		return (NULL);

	dimen = max - min + 1;

	ptr = malloc(sizeof(int) * dimen);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
