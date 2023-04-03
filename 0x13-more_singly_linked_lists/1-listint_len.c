#include "lists.h"

/**
 * listint - returns the number of elements
 * @h: List pointer head
 *
 * Return: No. of elemts
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}
