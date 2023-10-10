#include "search_algos.h"
/**
 * binary_search -  searches for a value in a sorted
 * array of integers using the Binary search algorithm
 *
 * @array: pointer to the 1st element of array to search in
 * @size: Array size
 * @value: Value to search
 *
 * Return: -1 or value index
*/
int binary_search(int *array, size_t size, int value)
{
	if (array != NULL)
	{
		int left = 0;
		int right = size - 1;

		while (left <= right)
		{
			int i = left;
			int mid = left + (right - left) / 2;

			printf("Searching in array: ");
			for (; i <= right; i++)
			{
				printf("%d", array[i]);
				if (i < right)
					printf(", ");
			}
			printf("\n");

			if (array[mid] == value)
				return (mid);

			if (array[mid] < value)
			{
				left = mid + 1;
			}
			else
			{
				right = mid - 1;
			}
		}
	}
	return (-1);
}
