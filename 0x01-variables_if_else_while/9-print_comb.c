#include <stdio.h>

/**
 * main- Entry point
 * Prints all possible combinations of single-digit numbers
 * 
 * Return: Always 0
 */
int main(void)
{
	int numStart;

	for (numStart = 0; numStart <= 9; numStart++)
	{
		putchar(numStart + '0');
		if (numStart == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
