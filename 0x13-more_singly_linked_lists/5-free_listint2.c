#include "lists.h"

/**
 * free_listint2 - Freean LL
 * @head: Head pointer
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if(head)
	{
		while (*head)
		{
			ptr = *head;
			*head = (*head)->next;
			free(ptr);
		}
	}
	else
		return;
	
	free(*head);
	head = 0;
}
