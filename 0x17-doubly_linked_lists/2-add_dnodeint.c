#include "lists.h"

/**
 * add_dnodeint - Adds a new node
 * @head: The DLL head
 * @n: The number to place
 *
 * Return: New DLL head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*head)
	{
		new_node->next = *head;
		new_node->prev = (*head)->prev;
		(*head)->prev = new_node;
		*head = new_node;
		return (*head);
	}

	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
	return (*head);
}
