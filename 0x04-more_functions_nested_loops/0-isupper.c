#include "main.h"
/**
 * main - entry point
 * @c - The number to be checked
 * Return - 1 is is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if((c >= 65) && (c <= 90))
		return (1);
	
	return (0);
}
