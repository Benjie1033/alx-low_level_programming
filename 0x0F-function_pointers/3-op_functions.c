# include "3-calc.h"
# include <stdlib.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - function to return sum of two intrs
 * @a: first int
 * @b: second int
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to return deduction of two ints
 * @a: first int
 * @b: second int
 * Return: subtraction
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function to multiply a and b
 * @a: first int
 * @b: second int
 * Return: mult
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function divides a and b
 * @a: first int
 * @b: second int
 * Return: divided
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function return remainder
 * @a: first int
 * @b: second int
 * Return: remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
