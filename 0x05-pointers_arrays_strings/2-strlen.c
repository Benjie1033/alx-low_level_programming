# include "main.h"
/**
 * _strlen - Funclion that returns length of a string
 * @s: Length
 * Return: 0
 */

int _strlen(char *s)
{
int i = 0;

while (*s != '\0')
	{
	i++;
	s++;

	}
return (i);
}
