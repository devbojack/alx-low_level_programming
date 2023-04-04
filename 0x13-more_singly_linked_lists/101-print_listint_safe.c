#include "lists.h"

/**
 * print_listint_safe - prints an ll
 * @head: list pointer header
 *
 * Return: No. of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t counter = 0;
	long int prev;

	while (head)
	{
		prev = head - head->next;
		counter++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (prev > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (counter);
}
