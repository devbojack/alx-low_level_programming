#include "lists.h"

/**
 * reverse_listint - Reverse an LL
 * @head: head list pointer
 *
 * Return: first node pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *current = NULL;
	if (head)
	{
		while (*head != NULL)
		{
			current = *head;
			*head = (*head)->next;
			current->next = previous;
			previous = current;
		}
		*head = previous;
		return (*head);
	}
	return (NULL);
}
