#include "lists.h"

/**
 * sum_listint - sum of all the data(n)
 * @head: List head pointer
 *
 * Return: sum of n or 0
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	if (ptr == NULL)
		return (sum);

	while (ptr)
	{
		int n = ptr->n;
		sum+=n;
		ptr = ptr->next;
	}

	return (sum);
}
