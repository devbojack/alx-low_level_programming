#include "main.h"

/**
  * print_rev - Prints a string in reverse
  * @s: The string to print
  *
  * Return: void
  */
void print_rev(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	x -= 1;

	while (x >= 0)
	{
		_putchar(s[x]);
		x--;
	}

	_putchar('\n');
}
