#include "main.h"

/**
 * puts2 - Print evey other character
 * @str: String to print from
 *
 * Return: void
 */
void puts2(char *str)
{
	int len = 0;
	int x;

	while (str[len] != '\0')
	{
		len++;
	}

	for (x = 0; x < len; x += 2)
	{
		_putchar(str[x]);
	}

	_putchar('\n');
}
