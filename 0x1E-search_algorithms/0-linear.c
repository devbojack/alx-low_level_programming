#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 * using the Linear search algorithm
 *
 * @array: Pointer to array to search into
 * @size: Array size
 * @value: Value to search for
 *
 * Return: First index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	if (array != NULL)
	{
		int found_index = -1;
		int is_found = 0;
		size_t i = 0;

		for (; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);

			if (array[i] == value && !is_found)
			{
				is_found = 1;
				found_index = i;
			}
		}

		return (found_index);
	}

	return (-1);
}
