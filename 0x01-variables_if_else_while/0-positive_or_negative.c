# include <stdio.h>
# include <stdlib.h>
# include <time.h>
/**
 *main - The variable n stores a different value each time the program runs
 *Return: 0 (pass)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0 || n < 0 || n == 0)
	{
		printf("positive\n");
		printf("is negative\n");
		printf("is zero\n");
	}
	return (0);
}
