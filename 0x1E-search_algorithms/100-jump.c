#include "search_algos.h"
/**
 * jump_search - Searches using jump search algorithm
 *
 * @array: Array pointer to search into
 * @size: Array size
 * @value: Value to search
 *
 * Return: -1 or value index
*/
int jump_search(int *array, size_t size, int value)
{
	if (array != NULL)
	{
		size_t jump = (size_t)sqrt(size);
		size_t left = 0;
		size_t right, i;

		for (left = right = 0; right < size && array[right] < value;)
		{
			printf("Value checked array[%ld] = [%d]\n", right, array[right]);
			left = right;
			right += jump;
		}


		printf("Value found between indexes [%ld] and [%ld]\n", left, right);
		for (i = left; i < size && i <= right; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
	}
	return (-1);
}
