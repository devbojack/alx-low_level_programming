#include <stdio.h>

/**
 * main - entry point
 * @c - The number to be checked
 *
 * Return - 0 always
 */

int _isupper(int c)
{
	if((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
