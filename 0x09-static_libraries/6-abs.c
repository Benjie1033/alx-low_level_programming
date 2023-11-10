# include "main.h"

/**
 * _abs - Function that computes absolute values of integers
 *@j: Integer values
 * Return: Always 0.
 */
int _abs(int j)
{

	if (j < 0)
	{
	int abs_val;

	abs_val = j * -1;
	return (abs_val);
	}
	return (j);
}

