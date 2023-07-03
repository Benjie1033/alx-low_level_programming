i include "main.h"

/**
 * _strspn - Function to get substring prefix
 * @s: string
 * @accept: constant
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int p = 0;
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
			p++;
			break;
			}
			else if (accept[k + 1] == '\0')
			{
			return (p);
			}
		s++;
		}
	return (p);
}
