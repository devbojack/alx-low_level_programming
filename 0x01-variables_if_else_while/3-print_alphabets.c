#include <stdio.h>

/**
 * main- Entry point
 * declaration and initializtion of myA and MyCapA
 * start of while loop for lowercase
 * printing of the alphabet in lowercase
 * start of the while loop for UPPERCASE
 * printing of the alphabet in UPPERCASE
 * New line
 * Return: Always 0
 */
int main(void)
{
	char myA = 'a';
	char myCapA = 'A';

	while (myA <= 'z')
	{
		putchar(myA);
		myA++;
	}

	while (myCapA <= 'Z')
	{
		putchar(myCapA);
		myCapA++;
	}
	putchar('\n');
	return (0);
}
