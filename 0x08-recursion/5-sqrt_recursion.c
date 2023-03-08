#include "main.h"

int _doubler(int n, int x);

/**
 * _sqrt_recursion - Returns square root
 * @n: Value
 *
 * Return: 1 or square root
 */
int _sqrt_recursion(int n)
{
	return (_doubler(n, 1));
}

/**
 * _doubler - Doubles for square
 * @n: Value for squareroot
 * @x: Doubler
 *
 * Return: Square root or -1
 */
int _doubler(int n, int x)
{
	int doubler = x * x;

	if (doubler == n)
		return (x);

	if (doubler > n)
		return (-1);

	return (_doubler(n, x + 1));
}
