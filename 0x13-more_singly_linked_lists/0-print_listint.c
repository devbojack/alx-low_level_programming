#include "lists.h"

/**
 * print_list - Prints all elements of a list
 * @h: List pointer
 *
 * Return: noo. of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *x = h;
	size_t count = 0;

	while (x != NULL)
	{
		printf("%d\n", x->n);
		count++;
		x = x->next;
	}

	return (count);
}
