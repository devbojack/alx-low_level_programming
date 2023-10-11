#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers
 * using the Jump search algorithm.
 *
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: value to search for
 *
 * Return: Pointer or null
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, skipper;
	listint_t *node, *jn;

	if (list == NULL || size == 0)
		return (NULL);

	jump = 0;
	skipper = sqrt(size);

	for (node = jn = list; jn->index + 1 < size && jn->n < value;)
	{
		node = jn;
		for (jump += skipper; jn->index < jump; jn = jn->next)
		{
			if (jn->index + 1 == size)
				break;
		}

		printf("Value checked at index [%ld] = [%d]\n", jn->index, jn->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jn->index);

	for (; node->index < jn->index && node->n < value ; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
