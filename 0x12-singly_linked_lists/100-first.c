# include <stdio.h>

void finaly(void) __attribute__ ((constructor));

/**
 * finaly - prints a statement before the main function
 */

void finaly(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
