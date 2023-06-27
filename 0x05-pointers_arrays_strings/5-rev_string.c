# include "main.h"

/**
 * rev_string - Function that reverses a string
 * @s: The string
 * Return: 0
 */
void rev_string(char *s)
{

	char rev = s[0];
	int count = 0;
	int i;

	while (s[count] != '\0')
		count++;
for (i = 0; i < count; i++)
	{
	count--;
	rev = s[i];
	s[i] = s[count];
	s[count] = rev;
	}
}
