#include "lists.h"

/**
 * free_dlistint - Free a DLL
 * @head: The head of the DLL
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
