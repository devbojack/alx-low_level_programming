#include "main.h"

/**
 * set_bit - Sets value of a bit to 1 at index
 * @n: Represting number
 * @index: Given index
 *
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size = (sizeof(unsigned long int) * 8);

	if (index > size)
		return (-1);

	if (*n |= 1 << index)
		return (1);

	return (-1);
}
