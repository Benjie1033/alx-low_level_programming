# include "variadic_functions.h"
# include <stdarg.h>
# include <stdio.h>
/**
 * print_strings - Function prints strings
 * @separator: string to be printed between the string
 * @n: number of strings
 * Return 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int j;

	va_start(strings, n);

	for (j = 0; j < n; j++)
	{
	str = va_arg(strings, char*);

		if (str == NULL)
			printf("(nil)");

		else
			printf("%s", str);

		if (j != (n - 1) && separator != NULL)
			printf("%s", separator);

	}

	printf("\n");
	va_end(strings);
}

