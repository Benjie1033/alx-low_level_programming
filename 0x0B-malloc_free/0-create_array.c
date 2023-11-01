# include "main.h"

/**
 * create_array - function to create an array
 * @size: size of array
 * @c:various characters
 *
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
