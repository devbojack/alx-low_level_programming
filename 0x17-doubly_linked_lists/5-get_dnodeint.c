#include "lists.h"

/**
 * get_dnodeint_at_index - Gets a node from a dll
 * @head: The head of he doubly linked list
 * @index: The index to find in the DLL
 *
 * Return: The specific node of the DLL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int iter_times = 0;

	if (head)
	{
		while (current != NULL)
		{
			if (iter_times == index)
				return (current);

			current = current->next;
			++iter_times;
		}
	}

	return (NULL);
}
