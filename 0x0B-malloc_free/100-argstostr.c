# include "main.h"
# include <stdio.h>
# include <stdlib.h>

/**
 *argstostr - concatnation
 *@ac: argument
 *@av: argument vector
 *Return: NULL
 */

char *argstostr(int ac, char **av)
{
	int c = 0, i = 0, j = 0, n = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		while (av[i][j])
		{
			c++;
			j++;
		}
		j = 0;
		i++;
	}
	s = malloc((sizeof(char) * c) + ac + 1);

	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			s[n] = av[i][j];
			n++;
			j++;
		}
		s[n] = '\n';

		j = 0;
		n++;
		i++;
	}

	n++;
	s[n] = '\0';
	return (s);
}
