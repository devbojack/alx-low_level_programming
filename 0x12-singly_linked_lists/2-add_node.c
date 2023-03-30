#include "lists.h"

/**
 * add_node: Adds a new node to list
 * @head:Head pointer
 * @str: String to add
 *
 * Return: New element addr or NULL
 */
list_t *add_node(list_t **head, const char*str)
{
	char *x;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return NULL;

	x = strdup(str);
	if (x == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len=0; str[len];)
		len++;

	(*new).str = x;
	(*new).len = len;
	(*new).next = *head;

	*head = new;

	return (new);
}
