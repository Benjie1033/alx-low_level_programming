# include <stdio.h>
# include <stdarg.h>
# include "variadic_functions.h"

/**
 * print_all - print anything
 * @format: a list of argument types to be passed
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list anything;
	char *string, *s = " ";
	int a = 0;

	va_start(anything, format);
	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", s, va_arg(anything, int));
				break;
				case 'i':
					printf("%s%d", s, va_arg(anything, int));
				break;
				case 'f':
					printf("%s%f", s, va_arg(anything, double));
				break;
				case 's':
					string = va_arg(anything, char*);
					if (!string)
						string = "(nil)";
					printf("%s%s", s, string);
				break;
				default:
					a++;
					continue;
			}
			s = ",";
			a++;
		}
	}
	printf("\n");
	va_end(anything);
}
