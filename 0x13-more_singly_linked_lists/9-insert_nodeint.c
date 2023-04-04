#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at n pos
 * @head: list point head
 * @idx: Index to insert at
 * @n: Data
 *
 * Return: New node addr or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 1;
	listint_t *ptr, *ptr2;

	if (head != NULL)
	{
		ptr2 = malloc(sizeof(listint_t));

		if (ptr2 == NULL)
			return (NULL);

		ptr2->n = n;
	
		if (idx > 0)
		{
			ptr = *head;
			while (ptr)
			{
				if (count == idx)
				{
					ptr2->next = ptr->next;
					ptr->next = ptr2;
					return (ptr);
				}
				count++;
				ptr = ptr->next;
			}
			if (idx > count)
				return (NULL);
		}
		else
		{
			ptr2->next = *head;
			*head = ptr2;
		}
		return (ptr2);
	}

	return (NULL);
}
