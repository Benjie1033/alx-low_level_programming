# include <stdio.h>
# include <stdlib.h>
# include <time.h>

/**
 * main - Programme that generates random passcodes
 *
 * Return: Always 0.
 */
int main(void)
{
	char passcode[84];
	int i = 0, sum = 0, diff1, diff2;

	srand(time(0));

	while (sum < 2772)
	{
		passcode[i] = 33 + rand() % 94;
		sum += passcode[i++];
	}
	passcode[i] = '\0';

	if (sum != 2772)
	{
		diff1 = (sum - 2772) / 2;
		diff2 = (sum - 2772) / 2;

		if ((sum - 2772) % 2 != 0)
			diff1++;
		for (i = 0; passcode[i]; i++)
		{
			if (passcode[i] >= (33 + diff1))
			{
				passcode[i] -= diff1;
				break;
			}
		}
		for (i = 0; passcode[i]; i++)
		{
			if (passcode[i] >= (33 + diff2))
			{
				passcode[i] -= diff2;
				break;
			}
		}
	}
	printf("%s", passcode);
	return (0);
}

