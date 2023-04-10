#include "main.h"

/**
  * flip_bits - returns the number of flip bits
  * @n: Number 1
  * @m: Number 2
  *
  * Return: flipped bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int size = 0;
	unsigned long int counter = 0;

	size = n ^ m;
	while (size)
	{
		if (size & 1)
		{
			counter = counter + 1;
		}
		size >>= 1;
	}

	return (counter);
}
