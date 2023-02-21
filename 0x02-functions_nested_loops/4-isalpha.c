#include "main.h"

/**
 * _isalpha - Check for letters
 * @c: Parameter of type int to be checked
 *
 * Return: 0 if false, 1 if true
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
