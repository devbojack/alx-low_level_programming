#include "main.h"

/**
 * _islower - Check for lowercase letters
 * @c: Parameter of type int to be checked
 *
 * Return: 0 if false, 1 if true
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
