#include "main.h"


/**
  * oneorzero - factorial to get 1 or 0
  * @n: representing number
  *
  * Return: 0 or 1
  */
void oneorzero(unsigned long int number)
{
        if (number < 1)
                return;

        oneorzero(number >> 1);

        if (number & 1)
                _putchar('1');
        else
                _putchar('0');
}


/**
 * print_binary - prints the binary representation
 * @n: rrepresnting numbeer
 *
 * Return: void
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
