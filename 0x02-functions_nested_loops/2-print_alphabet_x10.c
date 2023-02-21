#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Return void
 */
void print_alphabet_x10(void)
{
	char myStart;
	int printOnce;

	for (printOnce = 0; printOnce < 10; printOnce++)
	{
		for (myStart = 'a'; myStart <= 'z'; myStart++)
		{
			_putchar(myStart);
		}
		_putchar('\n');
	}
}
