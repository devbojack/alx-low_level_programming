#include "lists.h"

/**
 * sum_listint - sum of all the data(n)
 * @head: List head pointer
 *
 * Return: sum of n or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr;
	ptr = head;

	if (ptr == NULL)
		return (sum);

	while (ptr)
	{
		sum = sum + ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
