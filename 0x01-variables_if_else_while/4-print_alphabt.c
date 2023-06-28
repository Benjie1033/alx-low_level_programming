# include <stdio.h>

/**
 * main - Printing all alphabets minus q and e
 * Return: 0.
 */
int main(void)
{
	char c;
	char a;

	c = a;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
		continue;
		}
	putchar(a);
	}
	putchar('\n');
	return (0);
}
