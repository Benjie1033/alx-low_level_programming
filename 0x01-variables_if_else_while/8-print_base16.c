# include <stdio.h>

/**
 * main - Printing base 16 numbers
 * Return: 0
 */
int main(void)
{
	int b = 48;
	int a = 97;

	while (b <= 57)
	{
		putchar(b);
		b++;
	}
	while (a < 103)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);

}
