# include "main.h"
# include <stdlib.h>

/**
 * str_concat - concatnates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL
 */

char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, e = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[a])
		a++;
	while (s2[b])
		b++;

	e = a + b;
	s = malloc((sizeof(char) * e) + 1);

	if (s == NULL)
		return (NULL);
	b = 0;

	while (c < e)
	{
		if (c <= a)
			s[c] = s1[c];
		if (c >= a)
		{
			s[c] = s2[b];
			b++;
		}

		c++;
	}
	s[c] = '\0';
	return (s);
}

