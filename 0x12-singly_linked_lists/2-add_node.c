#include "lists.h"

/**
 * add_node: Adds a new node to list
 * @head: Head pointer
 * @str: String to add
 *
 * Return: New element addr or NULL
 */

/*
 *  Allocate memory for a new node.
 *  If the allocation fails, return NULL.
 *  Copy the string into a new buffer.
 *  If the string copy fails, free the new node and return NULL.
 *  Compute the length of the string.
 *  Set the new node’s next pointer to point to the current head of the list.
 *  Set the head of the list to point to the new node.
 *  Return a pointer to the new node
*/
list_t *add_node(list_t **head, const char *str)
{
	char *x;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	x = strdup(str);
	if (x == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len]; )
		len++;

	(*new).str = x;
	(*new).len = len;
	(*new).next = *head;
	*head = new;

	return (new);
}
