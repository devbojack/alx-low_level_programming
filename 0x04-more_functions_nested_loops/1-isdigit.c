#include  "main.h"

/**
 * _isdigit : Checks if int is a digit
 * @c: Value to be checked
 *
 * Return: 1 is c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);

	return (0);
}
