#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * @head: List head
 * @n: Data to add
 *
 * Return: NULL or add of n
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));
	
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
