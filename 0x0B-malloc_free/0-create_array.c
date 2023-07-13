# include "main.h"
# include <stdlib.h>

/**
 * create_array - an array
 * @size: size of the array
 * @c: characters in the array
 * Return: Null
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *s;

	s = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);

	for (a = 0; a < size; a++)
	{
		s[a] = c;
	}
		return (s);
}
