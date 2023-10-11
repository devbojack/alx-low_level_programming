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
	listint_t *node, *jump_node;

	if (list == NULL || size == 0)
		return (NULL);

	jump = 0;
	skipper = sqrt(size);

	for (node = jump_node = list; jump_node->index + 1 < size && jump_node->n < value;)
	{
		node = jump_node;
		for (jump += skipper; jump_node->index < jump; jump_node = jump_node->next)
		{
			if (jump_node->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump_node->index, jump_node->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		   node->index, jump_node->index);

	for (; node->index < jump_node->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
