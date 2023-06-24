# include "main.h"

/**
 * print_last_digit - Function that prints last digit of a number
 *@n: number to be worked on
 * Return: last digit value
 */
int print_last_digit(int n)
{
	int end;

	end = n % 10;
	if (end < 10)
	{
	end = end * -1;
	}
	_putchar(end + '0');
	return (end);
}
