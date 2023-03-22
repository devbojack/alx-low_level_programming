#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array to search
 * @size: elemnts in array
 * @cmp: point to function
 *
 * Return: -1 or 1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
