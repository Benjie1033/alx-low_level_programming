# include "main.h"

/**
 * _isalpha - Function that checks for alphabetic characters
 *@c: If c is a letter return 1 otherwise return 0
 * Return: Always 0
 */
int _isalpha(int c)
{
if ((c >= 64 && c <= 90) || (c >= 97 && c <= 123))
	{
	return (1);
	}
else
	{
	return (0);
	}
}
