#include <stdio.h>

/**
 * main- Entry point
 * declaration and initialization of myStart
 * start of for loop 
 * printing the numbers
 * Adding the spaces and the comma
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
