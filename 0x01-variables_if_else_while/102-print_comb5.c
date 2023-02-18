#include <stdio.h>

/**
 * main- Entry point
 * 00 01 - 98 99
 * New line
 * Return: Always 0
 */
int main(void)
{
	int leftNumber;
	int rightNumber;
	
	for (leftNumber = 0; leftNumber <= 98; leftNumber++)
	{
		for (rightNumber = leftNumber + 1; rightNumber <= 99; rightNumber++)
		{
			putchar((leftNumber / 10) + '0');
			putchar((leftNumber % 10) + '0');
			putchar(' ');
			putchar((rightNumber / 10) + '0');
			putchar((rightNumber % 10) + '0');

			if (leftNumber == 98 && rightNumber == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
