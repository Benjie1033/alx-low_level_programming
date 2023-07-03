# include "main.h"

/**
 * print_alphabet - All alphabets printed in lowercase letters
 *
 * Return: void
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 97; alphabet <= 122; alphabet++)
	{
	_putchar(alphabet);
	}
	_putchar('\n');
}
