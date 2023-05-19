#include "lists.h"

/**
  * dlistint_len - Counts DLL elements
  * @h: DLL to count
  *
  * Return: DLL elementS
  */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h)
	{
		++len;
		h = h->next;
	}

	return (len);
}
