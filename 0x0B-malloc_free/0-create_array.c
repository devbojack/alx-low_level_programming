#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates chars array and initializes
 * with a specific char
 * @size: Size of array
 * @c: Char to assign from.
 *
 * Return: 0 if size is 0, array pointer if not
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *y;

	if (size == 0)
		return (0);

	y = malloc(size * sizeof(char));

	if (y == NULL)
		return (0);

	for (x = 0; x < size; x++)
	{
		y[x] = c;
	}

	return (y);
}
