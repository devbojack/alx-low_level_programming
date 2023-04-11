#include "main.h"

/**
 * print_binary - prints the binary rep
 * @n: representing number
 *
 * Return: void/ nothing
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	oneorzero(n);
}

/**
 * oneorzero - factorial to get 1 or 0
 * @num: representing number
 *
 * Return: void/ nothing
 */
void oneorzero(unsigned long int num)
{
	if (num < 1)
		return;

	oneorzero(num >> 1);

	if (num & 1)
		_putchar('1');
	else
		_putchar('0');
}
