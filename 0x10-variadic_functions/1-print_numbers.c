#include "variadic_functions.h"

/**
 * print_numbers - function to print numbers
 * @separator: seperate between the numbers and print spring between
 * @n: number of integers passed
 *
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
	{
		va_list nums;
		unsigned int index;


		va_start(nums, n);


		for (index = 0; index < n; index++)
		{
			printf("%d", va_arg(nums, int));


			if (index != (n - 1) && separator != NULL)
				printf("%s", separator);
		}


		printf("\n");


		va_end(nums);
	}

