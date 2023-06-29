# include <stdio.h>

/**
 * main - Printing all alphabets minus q and e
 * Return: 0.
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
		{
		continue;
		}
	putchar(c);
	}
	putchar('\n');
	return (0);
}
