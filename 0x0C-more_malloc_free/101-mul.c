#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * _digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int _digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _stringlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _stringlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * error - handles errors for main
 */
void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int le1, le2, leng, i, car, d1, d2, *result, j = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !_digit(s1) || !_digit(s2))
		errors();
	le1 = _strlen(s1);
	le2 = _strlen(s2);
	leng = le1 + le2 + 1;
	result = malloc(sizeof(int) * leng);
	if (!result)
		return (1);
	for (i = 0; i <= le1 + le2; i++)
		result[i] = 0;
	for (le1 = le1 - 1; le1 >= 0; le1--)
	{
		d1 = s1[le1] - '0';
		car = 0;
		for (le2 = _stringlen(s2) - 1; le2 >= 0; le2--)
		{
			d2 = s2[le2] - '0';
			car += result[le1 + le2 + 1] + (d1 * d2);
			result[le1 + le2 + 1] = car % 10;
			car /= 10;
		}
		if (car > 0)
			result[le1 + le2 + 1] += car;
	}
	for (i = 0; i < leng - 1; i++)
	{
		if (result[i])
			j = 1;
		if (j)
			_putchar(result[i] + '0');
	}
	if (!j)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}

