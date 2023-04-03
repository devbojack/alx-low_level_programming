#include "lists.h"

/**
 * add_nodeint_end: add node in the end
 * @head: head pointer
 * @n: Data to add
 *
 * Return: NULL or new addr
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;
	ptr = *head;
	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (ptr == NULL)
	{
		*head = temp;
	}
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;

		ptr->next = temp;
	}

	return (temp);
}
