#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: list head pointer
 *
 * Return: size of freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	int abn;
	listint_t *ptr;

	if (!h || !*h)
		return (size);

	while (*h)
	{
		abn = *h - (*h)->next;
		if (abn > 0)
		{
			ptr = (*h)->next;
			free(*h);
			*h = ptr;
			size++;
		}
		else
		{
			free(*h);
			*h = NULL;
			size++;
			break;
		}
	}
	*h = NULL;
	return (size);
}
