#include "main.h"

/**
 * *_mem - fills memory with a constant byte
 * @a: memory area to be filled
 * @b: char to copy
 * @c: number of times to copy b
 *
 * Return: 0
 */

char *_mem(char *a, char b, unsigned int c)
{
	unsigned int i;

	for (i = 0; i < c; i++)
	{
		a[i] = b;
	}

	return (a);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_mem(ptr, 0, nmemb * size);

	return (ptr);
}
