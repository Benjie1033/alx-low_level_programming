# include <stdio.h>

/**
 * main - Function that prints numbers with space and coma
 * Return: 0
 *
 */
int main(void)

{
	int num;

	for (num = 48; num <= 57; num++)
	{
	putchar(num);
	if (num == 57)
	{
		continue;
	}
	putchar(',');
	putchar(' ');

	}
	putchar('\n');
	return (0);
}
