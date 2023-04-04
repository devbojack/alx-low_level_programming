#include "lists.h"

/**
 * free_listint2 - Free an LL
 * @head: Head pointer
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head != NULL)
	{
		while (*head != NULL)
		{
			ptr = *head;
			*head = (*head)->next;
			free(ptr);
		}
		*head = NULL;
	}
}
