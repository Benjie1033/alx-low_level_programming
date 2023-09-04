#include "main.h"

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0, l = 0;
	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;

	}
	l += ac;

	string = malloc(sizeof(char) * l + 1);

	if (string == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{

		string[k] = av[i][j];
		k++;

	}
	if (string[k] == '\0')
	{
		string[k++] = '\n';

	}
	}

	return (string);
}

