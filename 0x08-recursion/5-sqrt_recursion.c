# include "main.h"
# include <stdio.h>

int _sqroot(int n, int k);

/**
 * _sqrt_recursion - calc natural square roots
 * @n: total
 * Return: squareroot of zero
 */

int _sqrt_recursion(int n)
{
	return (_sqroot(n, 1));
}
/**
 *_sqroot - returns the sqr root of a number
 *@n: integers
 *@k: other integers
 *Return: 0
 */

int _sqroot(int n, int k)
{
	int sqroot = k * k;

	if (sqroot > n)
		return (-1);

	if (sqroot == n)
		return (k);
	return (_sqroot(n, k + 1));
}
