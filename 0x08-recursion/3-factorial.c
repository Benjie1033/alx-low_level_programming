# include "main.h"

/**
 * factorial - this is multiplying next number in the sequency by self
 * @n: integers
 * Return: 0.
 */

int factorial(int n)
{
	if (n < 0)
	return (-1);

	if (n <= 1)
	return (1);

	return (n * factorial(n - 1));
}
