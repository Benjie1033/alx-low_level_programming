# include "main.h"

/**
 * puts2 - Function that prints every char of a string, starting from first
 * @str: the string
 * Return: 0
 */
void puts2(char *str)
{
	int i = 0;
	int r = 0;
	char *y = str;
	int u;

	while (*y != '\0')
	{
		y++;
		i++;
	}
	r = i - 1;
	for (u = 0; u <= r; u++)
	{
	if (u % 2 == 0)
		{
		_putchar(str[u]);
		}
	}
	_putchar('\n');

}
