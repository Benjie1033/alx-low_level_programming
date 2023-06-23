# include "main.h"

/**
 * print_alphabet_x10 - A function that prints the alphabet in lowercase x10
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char alp;
	int num;

	for (num = 0; num < 10; num++)
	{
	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
		_putchar(num);
		_putchar('\n');
	}


}
