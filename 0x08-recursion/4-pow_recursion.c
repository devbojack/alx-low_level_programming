#include "main.h"

/**
 * _pow_recursion - Return power of x to y
 * @x: Base
 * @y: Power
 *
 * Return: -1 if y is < 0, or the power of x to y
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));

	if (y == 0)
		return (1);

	return (-1);
}
