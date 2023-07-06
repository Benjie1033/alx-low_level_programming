# include "main.h"

/**
 *str - String length
 *@s: string
 *
 *Return: 0.
 */

int str(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + str(s + 1));
}

/**
 *compare - compares characters in the string
 *@s: string
 *@j: small integer
 *@a: large integer
 *Return: 0.
 */

int compare(char *s, int j, int a)
{
	if (*(s + j) == *(s + a))
	{
		if (j == a || j == a + 1)
			return (1);
		return (0 + compare(s, j + 1, a - 1));
	}
	return (0);
}
/**
 * is_palidrome - checking for palidromes
 * @s: string
 * Return: 0.
 */

int is_palindrome(char *s)
{

	if (*s == '\0')
		return (1);
	return (compare(s, 0, str(s) - 1));
}

