#include "main.h"

int check(char *s, int i, int len);
int _len_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check(s, 0, _len_recursion(s)));
}

/**
 * _len_recursion - length of a string
 * @s: string length of
 *
 * Return: 1
 */

int _len_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _len_recursion(s + 1));
}

/**
 * check - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check(s, i + 1, len - 1));
	_putchar('\n');
}
