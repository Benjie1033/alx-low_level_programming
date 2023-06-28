# include "main.h"
/**
 * print_rev - Function that prints a string
 * @s: String
 * Return: 0
 */
void print_rev(char *s)
{

	int l = 0;
	int i;

	while (*s != '\0')
	{
	l++;
	s++;
	}
	s--;
	for (i = l; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

_putchar('\n');
}
