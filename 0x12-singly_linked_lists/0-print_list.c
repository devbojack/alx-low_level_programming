#include "lists.h"

/**
 * print_list - Prints all elemments of a list
 *
 * @h: List pointer
 *
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	const list_t *x = h;
	size_t count = 0;

	while (x != NULL)
	{
		if ((*x).str != NULL)
			printf("[%d] %s\n", (*x).len, (*x).str);
		else
			printf("[0] (nil)\n");
		count++;
		x = x->next;
	}

	return (count);
}
