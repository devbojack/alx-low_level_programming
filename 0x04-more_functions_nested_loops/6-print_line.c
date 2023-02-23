#include "main.h"

/**
 * print_line - Print a line
 *
 * Return - A line
 */

void print_line(int n)
{
	int x;

	if (n <= 0 )
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
