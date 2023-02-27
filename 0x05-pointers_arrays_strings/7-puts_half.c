#include "main.h"

/**
 * puts_half - Print half of a sring
 * @str: String to print
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int i, halfLen;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 != 0)
	{
		halfLen = (len - 1) / 2;
		halfLen += 1;
	}
	else
		halfLen = len / 2;

	for (i = halfLen; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
