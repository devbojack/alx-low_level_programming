#include "main.h"


/**
 * _print_rev_recursion
 * @s: String to print i reverse
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	_putchar('\0');
	return;
}
