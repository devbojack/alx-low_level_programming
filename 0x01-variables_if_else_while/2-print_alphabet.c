#include <stdio.h>

/**
 * main- Entry point
 * declaration and initializtion of myA
 * start of while loop
 * printing of the alphabet
 * New line
 * Return: Always 0
 */
int main(void)
{
	char myA = 'a';

	while (myA <= 'z')
	{
		putchar(myA);
		putchar('\n');
		myA++;
	}
	return (0);
}
