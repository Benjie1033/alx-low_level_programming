# include "main.h"

/**
 * print_diagsums - Sum of matrix
 * @a: array
 * @size: size of matrix
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int one;
	int two;
	int z;

	for (z = 0; z < size; z++)
	{
		one = one + a[z * size + z];
	}
	for (z = size - 1; z >= 0; z--)
	{
		two += a[z * size + (size - z - 1)];
	}
	printf("%d, %d\n", one, two);
}
