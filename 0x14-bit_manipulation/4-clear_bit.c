#include "main.h"

/**
  * clear_bit - Sets value of a bit to 0 at index
  * @n: representing number
  * @index: index number
  *
  * Return: 1 or -1
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size = (sizeof(unsigned long int) * 8);

	if (index < size)
	{
		*n &= (~(1 << index));
		return (1);
	}

	return (-1);
}
