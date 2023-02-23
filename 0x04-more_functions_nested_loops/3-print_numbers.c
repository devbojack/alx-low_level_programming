#include "main.h"

/**
 * print_numbers - Print 0 to 9
 *
 * Return: 0 to 9 numbers
 */
void print_most_numbers(void)
{
	int myStart;

	for (myStart = 0; myStart <= 9; myStart++)
	{
		_putchar(myStart + '0');
	}

	_putchar('\n');
}
