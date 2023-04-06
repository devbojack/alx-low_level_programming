#include "main.h"

/**
 * binary_to_uint - Converts to unsigned int
 * @b: head pointer
 *
 * Return: Converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int length = 0, counter = 0, total = 0;

	if (!b)
		return (0);

	while (b[length])
		length++;

	while (length--)
	{
		if (b[length] != 49 && b[length] != 48)
			return (0);

		if (b[length] == 49)
			total += 1 << counter;

		counter++;
	}
	return (total);
}
