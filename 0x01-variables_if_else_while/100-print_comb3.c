#include <stdio.h>

/**
 * main- Entry point
 * 0 - 99
 * New line
 * Return: Always 0
 */
int main(void)
{
	int leftNumber;
	int rightNumber;

	for (leftNumber = 0; leftNumber <= 9; leftNumber++)
	{
		for (rightNumber = 0; rightNumber <= 9; rightNumber++)
		{
			if (rightNumber > leftNumber)
			{
				putchar(leftNumber + '0');
				putchar(rightNumber + '0');
				if (leftNumber == 8 && rightNumber == 9)
					continue;
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			if (leftNumber == 9 && rightNumber == 9)
				continue;
		}
	}
	putchar('\n');
	return (0);
}
