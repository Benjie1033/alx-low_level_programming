#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: String to be measured.
 *
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
	_putchar('\n');
}
