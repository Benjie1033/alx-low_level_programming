# include "main.h"
# include <stdlib.h>

/**
 * _strdup - return a pointer to a str
 * @str: the string
 * Return: 0
 */

char *_strdup(char *str)
{
	int p = 0, k = 1;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[k])
	{
		k++;
	}
	s = malloc((sizeof(char) * k) + 1);

	if (s == NULL)
		return (NULL);

	while (p < k)
	{
		s[p] = str[p];
		p++;
	}
	s[p] = '\0';
	return (s);
}
