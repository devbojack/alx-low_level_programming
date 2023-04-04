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
	unsigned int count = 0;
	listint_t *ptr = *head;
	listint_t *ptr2 = malloc(sizeof(listint_t));

	if (ptr2 == NULL)
		return (NULL);

	ptr2->n = n;
	ptr2->next = NULL;
	idx--;

	if (ptr != NULL)
	{
		while (count != idx)
		{
			count++;
			ptr = ptr->next;
		}
		ptr2->next = ptr->next;
		ptr->next = ptr2;
		return (ptr);
	}

	return (NULL);
}
