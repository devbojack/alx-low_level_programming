#include <stdio.h>

/**
 * main- Entry point
 * 0 - 789
 * New line
 * Return: Always 0
 */
int main(void)
{
	int leftNumber;
	int middleNumber;
	int rightNumber;

	for (leftNumber = 0; leftNumber <= 9; leftNumber++)
	{
		for (middleNumber = 0; middleNumber <= 9; middleNumber++)
		{
			for (rightNumber = 0; rightNumber <= 9; rightNumber++)
			{
				if (rightNumber > middleNumber && middleNumber > leftNumber)
				{
					putchar(leftNumber + '0');
					putchar(middleNumber + '0');
					putchar(rightNumber + '0');
					if (leftNumber == 7 && middleNumber == 8 && rightNumber == 9)
						continue;
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
