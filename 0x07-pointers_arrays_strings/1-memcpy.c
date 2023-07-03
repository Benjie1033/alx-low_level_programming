# include "main.h"

/**
 * _memcpy - Is a function that copies n bytes from src to dest
 * @dest: is the destination file for n to be stored
 * @src: is the source of n data for our memory
 * @n: number of data coppied
 * Return: 0.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
	dest[j] = src[j];
	}
	return (dest);
}
