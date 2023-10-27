# include <stdio.h>
# include <stdlib.h>

/**
 * main - main header
 * argc: argument count
 * argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, mul = 0;

	if (argc > 2)
	{
		i = atoi(argv[1]);
		mul = atoi(argv[2]);

		printf("%d\n", i * mul);
	}
	else 
	{
		printf("error\n");
		return (1);
	}
	return 0;
}
