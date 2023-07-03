# include "main.h"

/**
 *times_table - Function that prints multiples of 9
 *
 * Return: Always 0
 */
void times_table(void)
{
	int n = 9;
	int j;

	for (j = 0; j <= 9; j++)
	{
	_putchar("%d * %d = %d \n", n, j, n * j);
	
	}


}
