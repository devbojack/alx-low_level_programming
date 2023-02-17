#include <stdio.h>

/**
 * main- Entry point
 * declaration of myStart
 * start of for loop and initialization of myStart
 * printing 0 - 9
 * New line
 * Return: Always 0
 */
int main(void)
{
	int myNumStart;
	char myCharStart;
	
	for(myNumStart = 0; myNumStart <= 9; myNumStart++)
		putchar(myNumStart + '0');
	for(myCharStart = 'a'; myCharStart <= 'f'; myCharStart++)
		putchar(myCharStart);
	putchar('\n');
	return (0);
}
