#include <stdio.h>

/**
 * main- Entry point
 * 00 01 - 98 99
 * New line
 * Return: Always 0
 */
int main(void)
{
	int leftNumberLeft;
	int leftNumberRight;
	int rightNumberLeft;
	int rightNumberRight;

	for (leftNumberLeft = 0; leftNumberLeft <= 9; leftNumberLeft++)
	{
		for (leftNumberRight = 0; leftNumberRight <= 9; leftNumberRight++)
		{
			for (rightNumberLeft = 0; rightNumberLeft <= 9; rightNumberLeft++)
			{
				for (rightNumberRight = 0; rightNumberRight <= 9; rightNumberRight++)
				{
					if (leftNumberLeft <= rightNumberLeft)
					{
						if (leftNumberRight < rightNumberRight)
						{
							putchar(leftNumberLeft + '0');
							putchar(leftNumberRight + '0');
							putchar(' ');
							putchar(rightNumberLeft + '0');
							putchar(rightNumberRight + '0');
							if (leftNumberLeft == 9 && leftNumberRight == 8 && rightNumberLeft ==9 && rightNumberRight == 9)
								continue;
							else
							{
								putchar(',');
								putchar(' ');
							}
						}
					}
					else 
						continue;
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
