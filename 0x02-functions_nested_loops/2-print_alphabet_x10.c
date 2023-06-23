# include "main.h"

/**
 * print_alphabet_x10 - A function that prints the alphabet in lowercase x10
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char alp;
	int num = 0;

	while (num < 10)
	{
	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
		_putchar('\n');
		num++;
	}



}
