#include "lists.h"

/**
 * pop_listint - Deletes head node
 * @head: head pointer
 *
 * Return: 0 or node's data
 */
int pop_listint(listint_t **head)
{
	int myN = 0;

	if (*head == NULL)
		return (0);
	else
	{
		listint_t *temp = (*head)->next;
		myN = (*head)->n;
		free(*head);
		*head = temp;
	}
	return (myN);
}
