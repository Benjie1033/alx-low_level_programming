# include "main.h"

/**
 *_memset - Function input
 *@s: pointer
 *@b: constant
 *@n: number of data to be input
 *Return: 0
*/

char *_memset(char *s, char b, unsigned int n)
{
	int j;

	for (j = 0; n > 9; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
