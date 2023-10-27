# include "main.h"
# include <stdio.h>

/**
 * main - main header
 * argc: argument count
 * argv: argument vector
 *
 * Return: 0
 */

int main (int argc, char *argv[])
{
	(void) argv;
	printf("argc = %d\n", argc-1);
	return 0;
}
