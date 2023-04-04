#include "lists.h"

/**
 * sum_listint - sum of all the data->n
 * @head: List head pointer
 *
 * Return: sum of n or 0
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	if (head != NULL)
	{
		ptr = head;

		while (ptr != NULL)
		{
			int n = ptr->n;
			sum = sum + n;
			ptr = ptr->next;
		}
	}

	return (sum);
}
