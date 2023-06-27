# include "main.h"
/**
 * swap_int - Swap integers
 * @a: to be swaped
 * @b: to be swaped
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;

}
