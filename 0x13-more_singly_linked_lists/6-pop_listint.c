#include "lists.h"

/**
 * pop_listint - Deletes head node
 * @head: head pointer
 *
 * Return: node's data n or 0
 */
int pop_listint(listint_t **head)
{
	int my_n = 0;

	if (*head == NULL)
		return (0);
	else
	{
		listint_t *temp = (*head)->next;

		my_n = (*head)->n;
		free(*head);
		*head = temp;
	}

	return (my_n);
}
