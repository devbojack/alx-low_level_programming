#include "main.h"

/**
 * _isupper - check is char is uper
 * @c - The number to be checked
 *
 * Return: 1 if is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
