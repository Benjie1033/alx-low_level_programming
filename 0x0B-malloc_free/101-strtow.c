# include "main.h"
# include <stdlib.h>

int word_length(char *str);
int str_count(char *str);
char **strtow(char *str);

/**
 * word_length - length of out string
 * @str: string
 * Return: NULL
 */

int word_length(char *str)
{
	int inx = 0, length = 0;

	while (*(str + inx) && *(str + inx) != ' ')
	{
		length++;
		inx++;
	}
	return (length);
}

/**
 * str_count - count number of chars in a string
 * @str: string
 * Return: NUll
 */

int str_count(char *str)
{
	int index = 0, word = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;

	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			word++;
			index += word_length(str + index);
		}
	}
	return (word);
}

/**
 * strtow - splitting string to word
 * @str: string
 * Return: NULL
 */

char **strtow(char *str)
{
	char **s;
	int i = 0, w, m, lett, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	w = str_count(str);
	if (w == 0)
		return (NULL);

	s = malloc(sizeof(char *) * (w + 1));
	if (s == NULL)
		return (NULL);

	for (m = 0; m < w; m++)
	{
		while (str[i] == ' ')
			i++;

		lett = word_length(str + i);

		s[m] = malloc(sizeof(char) * (lett + 1));

		if (s[m] == NULL)
		{
			for (; m >= 0; m--)
				free(s[m]);
			free(s);
			return (NULL);
		}
		for (l = 0; l < lett; l++)
			s[m][l] = str[i++];
		s[m][l] = '\0';
	}
	s[m] = NULL;
	return (s);
}
