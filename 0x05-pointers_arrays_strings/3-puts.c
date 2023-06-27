# include "main.h"
/**
 * _puts - Function that prints a string and a new line
 * @str: String to print
 * Return: 0;
 */
void _puts(char *str)
{
	while (str != '\0')
	{
	_puts(str++);

	}
		_putchar('\n');
}
