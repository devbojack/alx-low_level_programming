#include "lists.h"

/**
 * list_len - Returns no. of elements
 * @h: List pointer
 *
 * Return: size_t
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = (*h).next;
	}

	return (count);
}
