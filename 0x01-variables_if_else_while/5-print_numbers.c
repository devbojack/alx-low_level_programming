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
	int myStart;

	for (myStart = 0; myStart < 10; myStart++)
		printf("%d", myStart);
	putchar('\n');
	return (0);
}
