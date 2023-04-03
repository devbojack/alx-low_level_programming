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
		while (*head != NULL)
		{
			ptr = *head;
			free(ptr);
			*head = (*head)->next;
		}
	}
	else
		return;
	
	free(*head);
	head = NULL;
}
