#include "main.h"

/**
 * main - entry point
 *
 * Return void
 */

void print_alphabet(void)
{
	char myStart;

	for (myStart = 'a'; myStart <= 'z'; myStart++)
	{
		_putchar(myStart);
	}
	_putchar('\n');
}
