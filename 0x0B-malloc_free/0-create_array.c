# include "main.h"

/**
 * create_array - array of chars, and initializes it with a specific char
 * @c: special char
 * @size: size of array
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int i;

	string = malloc(sizeof(char) * size);

	if (size == 0 || string == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		string[i] = c;

	return (string);

}
