# include <stdarg.h>
# include "variadic_functions.h"

/**
 * sum_them_all - sum of all members in main
 * @n: is the argument number of values
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int res = 0, j;

	va_start(list, n);

	for (j = 0; j < n; j++)

		res = res + va_arg(list, int);

	va_end(list);

	return (res);
}
