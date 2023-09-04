# include "main.h"

/**
 * word_count - help count words in string
 * @s: string
 * Return: word count
 */

int word_count(char *s)
{
	int f, c, w;

	for (c = 0; s[c] != '\0'; c++)
	{
	if (s[c] == ' ')
	f = 0;

	else

	if (f == 0)
	{
		f = 1;
		w++;
	}
	}
return (w);
}

/**
 * strtow - splits string
 * @str: to be split
 * Return: 0
 */

char **strtow(char *str)
{
	char **m, *t;
	int i, k = 0, l = 0, wor, ch = 0, st, end;

	l = 0;
	while (*(str + l))
	l++;

	wor = word_count(str);
	if (wor == 0)
		return (NULL);

	m = (char **) malloc(sizeof(char *) * (wor + 1));
	if (m == NULL)
		return (NULL);

	for (i = 0; i <= l; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (ch)
			{
				end = i;
				t = (char *) malloc(sizeof(char) * (ch + 1));
				if (t == NULL)
					return (NULL);

				while (st < end)
					*t++ = str[st++];
				*t = '\0';
				m[k] = t - ch;

				k++;
				ch = 0;
			}
		}
		else if (ch++ == 0)
			st = i;
	}
	m[k] = NULL;
	return (m);
}
