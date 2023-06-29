# include <stdio.h>

/**
 * main - Printing alphabets in reverse
 * Return: 0
 */
int main(void)
{
	int a = 122;

	while (a >= 97)
	{
	putchar(a);
	a--;
	}
	putchar('\n');
	return (0);
}
