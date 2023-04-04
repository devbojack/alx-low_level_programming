#include "lists.h"

/**
 * delete_nodeint_at_index - Delete idx node
 * @head: head list pointer
 * @index: Index to delete
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 1;
	listint_t *current = *head;
	listint_t *previous = *head;

	if ((*head == NULL) || (head == NULL))
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	else
	{
		if (index > 0)
		{
			while (current)
			{
				if (index == count)
				{
					previous->next = current->next;
					free(current);
					return (1);
				}
				previous = current;
				current = current->next;
				count++;
			}
			if (index > count)
				return (-1);
		}
	}
	return (-1);
}
