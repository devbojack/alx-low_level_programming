#include "lists.h"

/**
 * print_listint - Prints all elements of a list
 * @h: List pointer
 *
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *x = h;
	size_t count = 0;

	while (x != NULL)
	{
		printf("%d\n", x->n);
		x = x->next;
		count++;

	}
	return (count);
}
