#include <stdio.h>

/**
 * main- Entry point
 * declaration and initializtion of myZ
 * start of while loop
 * printing of the alphabet
 * New line
 * Return: Always 0
 */
int main(void)
{
	char myZ = 'z';

	while (myZ >= 'a')
	{
		putchar(myZ);
		myZ--;
	}
	putchar('\n');
	return (0);
}
