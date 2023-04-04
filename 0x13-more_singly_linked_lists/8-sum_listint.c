#include "lists.h"

/**
 * sum_listint - sum of all the data->n
 * @head: List head pointer
 *
 * Return: sum of n or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head != NULL)
		{
			int n = head->n;
			sum = sum + n;
			head = head->next;
		}
	}

	return (sum);
}
