#include "search_algos.h"
/**
 * recursive_me - searches reccursively
 *
 * @array: ptr to the first element of the [sub]array to search.
 * @left: starting index of the [sub]array to search.
 * @right: ending index of the [sub]array to search.
 * @value: The value to search for.
 *
 * Return: -1 or value index
 */
int recursive_me(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;

	if (array[i] == value && (i == left || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (recursive_me(array, left, i, value));
	return (recursive_me(array, i + 1, right, value));
}

/**
 * advanced_binary - searches for a value in a sorted array of
 * integers using Advanced binary search
 *
 * @array: pointer to the first element of the array to search in
 * @size: array size
 * @value: the value to search
 *
 * Return: -1 or value index
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array != NULL || size != 0)
	{
		return (recursive_me(array, 0, size - 1, value));
	}

	return (-1);
}
