#include "main.h"
# include <stdio.h>

int prime(int n, int p);

/**
 *is_prime_number - primes
 *@n: numbers sequence
 *Return: 0.
 */

int is_prime_number(int n)
{
	return (prime(n, 1));
}

/**
 * prime - check for primes
 * @n: numbers to check
 * @p: iteration
 * Return: 0.
 */

int prime(int n, int p)
{
	if (n <= 1)
		return (0);
	if (n % p == 0 && p > 1)
		return (0);
	if ((n / p) < p)
		return (1);

	return (prime(n, p + 1));
}
