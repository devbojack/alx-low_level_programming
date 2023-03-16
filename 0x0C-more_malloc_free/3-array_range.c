#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: min size
 * @max: Max size
 *
 * Return: 0 or pointer
 */
int *array_range(int min, int max)
{
	int *a, i = 0;

	if (min > max)
		return (0);

	a = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
		return (0);

	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}

	return (a);
}
