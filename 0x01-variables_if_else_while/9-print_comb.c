#include <stdio.h>

/**
 * main- Entry point
 * declaration and initializtion of myA and MyCapA
 * start of while loop for lowercase
 * printing the numbers
 * Adding the spaces and the comma
 * New line
 * Return: Always 0
 */
int main(void)
{
	int numStart;
	
	for(numStart = 0; numStart <= 9; numStart++)
	{
		putchar(numStart + '0');
		if(numStart == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
