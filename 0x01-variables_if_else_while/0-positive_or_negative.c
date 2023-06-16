#include <stdlib.h>
#include <time.h>
/**
 *main - The variable n will store a different value every time you will run this program
 *Return: 0 (pass)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
