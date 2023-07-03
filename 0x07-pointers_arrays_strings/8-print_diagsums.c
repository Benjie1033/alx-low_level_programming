# include "main.h"
# include <stdio.h>

/**
 * print_diagsums - Sum of matrix
 * @a: array
 * @size: size of matrix
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int i, one = 0, two = 0;

	for (i = 0; i < size; i++)
	{
		one += a[i];
		a += size;
	}
	a -= size;

	for (i = 0; i < size; i++)
	{
		two += a[i];
		a -= size;
	}
	printf("%d, %d\n", one, two);
}
