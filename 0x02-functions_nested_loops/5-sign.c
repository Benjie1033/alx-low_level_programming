# include "main.h"

/**
 * print_sign - Function that prints the sign of a number
 *@n: print signs if n is less that 0 or n equals 0 or n is greater than 0
 * Return: Always 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n == 0)
	{
	_putchar(48);
	return (0);
	}
	else
	{
	_putchar(45);
	return (-1);
	}
}
