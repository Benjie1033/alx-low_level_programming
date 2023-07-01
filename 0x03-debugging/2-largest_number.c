# include "main.h"

/**
 * largest_number - return the largest of the three
 * @a: first int
 * @b: second int
 * @c: third int
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > c && c > b)
	{
	largest = a;
	}
	else if (c > b && b < a)
	{
	largest = c;
	}
	else
	{
	largest = b;
	}
	return (largest);
}