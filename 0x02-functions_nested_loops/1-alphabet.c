#include "main.h"

/**
 * main - entry point
 *
 * Return: 0 always
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
