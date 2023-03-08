#include "main.h"

int _primer(int n, int x);

/**
 * is_prime_number - Finds if number is a primer number
 * @n: value
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	return (_primer(n, 1));
}

/**
 * _primer - Divides number
 * @n: Value
 * @x: Divider
 *
 * Returns: primer
 */
int _primer(int n, int x)
{
	if (n <= 1)
		return (0);

	if (n % x == 0 && x > 1 && x < n)
		return (0);

	if ((n / x) < x)
		return (1);

	return (_primer(n, x + 1));
}
