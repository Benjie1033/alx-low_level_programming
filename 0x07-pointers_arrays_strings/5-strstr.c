# include "main.h"

/**
 * _strstr - Needle in a hay stack
 * @haystack: string
 * @needle: character
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
	haystack++;
	char *i = haystack;
	char *p = needle;
		while (*i == *p && *p != '\0')
		{
		i++;
		p++;
		}
	}
	if (*p == '\0')
	{
		return (haystack);
	}
	return (0);
}
