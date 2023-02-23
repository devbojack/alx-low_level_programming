#include "main.h"

/**
 * print_line - Print a line
 * @n: Number of line to draw
 *
 * Return - A line, empty or skip
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
