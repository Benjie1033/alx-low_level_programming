#include "variadic_functions.h"

/**
 * print_strings - function to print a string followed by new line
 *@separator: string to be printed between numbers
 *@n: parameters
 *
 *Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
	{
		va_list strings;
		char *str;
		unsigned int index;


		va_start(strings, n);


		for (index = 0; index < n; index++)
		{
			str = va_arg(strings, char *);


			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);


			if (index != (n - 1) && separator != NULL)
				printf("%s", separator);
		}


		printf("\n");


		va_end(strings);
	}

