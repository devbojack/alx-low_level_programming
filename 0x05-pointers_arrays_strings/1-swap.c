#include "main.h"

/**
 * swap_int - Swaps value of 2 integers
 * @a : Value to be swapped into
 * @b : Value to be swapped from
 *
 * Return : void
 */
void swap_int(int *a, int *b)
{
	int storeA;

	storeA = *a;
	*a = *b;
	*b = storeA;
}
