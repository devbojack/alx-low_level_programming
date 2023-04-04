#include "lists.h"

/**
 * get_nodeint_at_index - Returns nth node
 * @head: list head pointer
 * @index;Index to return
 *
 * Return: nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int count = 0;

	if (ptr == NULL)
		return (NULL);

	while (ptr && count != index)
	{
		count++;
		ptr = ptr->next;
	}
	return (ptr);
}
