#include "main.h"

/**
 * print_diagonal - Draws a diagonal line
 * @n: Number of times theline should be printed
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (a = 0; a < n; a++)
		{
			for(b = 0; b < a; b++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
