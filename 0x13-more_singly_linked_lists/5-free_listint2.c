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
	listint_t **temp = head;

	if (temp != NULL)
	{
		while (*head != NULL)
		{
			temp = *head;
			free(ptr);
			*head = (*head)->next;
		}
		*temp = NULL;
	}
}
