#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  Generae random password
 *
 * Return: Alwys 0
 */
int main(void)
{
	char password[84];
	int index = 0;
	int sum = 0;
	int a1, a2;

	srand(time(0));

	while (sum < 2772)
	{
		password[index] = 33 + rand() % 94;
		sum += password[index++];
	}
	password[index] = '\0';

	if (sum != 2772)
	{
		a1 = (sum - 2772) / 2;
		a2 = (sum - 2772) / 2;

		if ((sum - 2772) % 2 != 0)
			a1++;

		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + a1))
			{
				password[index] -= a1;
				break;
			}
		}
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + a2))
			{
				password[index] -= a2;
				break;
			}
		}
	}

	printf("%s" , password);
	return (0);
}
