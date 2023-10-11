#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: array size
 * @value: value to search into
 *
 * Return: -1 or value index
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (left <= right)
	{
		size_t diff = right - left;
		size_t range = array[right] - array[left];
		size_t pos = left + ((double)diff / range * (value - array[left]));

		if (pos < size)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			left = pos + 1;
		else
			right = pos - 1;
	}
	return (-1);
}
