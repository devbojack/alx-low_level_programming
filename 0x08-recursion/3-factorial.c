#include "main.h"

/**
 * factorial - Returns a factorial
 * @n: Number to factorial
 *
 * Return: The factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return(-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
