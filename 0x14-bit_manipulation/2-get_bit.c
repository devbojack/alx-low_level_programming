#include "main.h"

/**
 * get_bit - returns the value of a bit at index
 * @n: Rep number
 * @index: Given index
 *
 * Return: Int or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int counter;
	counter = 0;

	while (n)
	{
		if (counter == index)
		{
			if (n % 2)
			{
				return (1);
			}
			else
			{
				return (0);
			}
		}
		counter = counter + 1;
		n = n / 2;
	}

	if ((index > counter) && (index < 63))
	{
		return (0);
	}

	return (-1);
}
