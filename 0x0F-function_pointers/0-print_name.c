# include "function_pointers.h"

/**
 * print_name - function to print the name
 * @name: name of function to be printed
 * @f: pointer to the function to be printed
 * Return: string
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
