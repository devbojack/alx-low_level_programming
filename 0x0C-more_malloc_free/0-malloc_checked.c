#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocate mem using malloc
 * @b: Size tto allocate
 *
 * Return: Pointer
 */
void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);

	if (x == NULL)
		exit(98);

	return (x);
}
