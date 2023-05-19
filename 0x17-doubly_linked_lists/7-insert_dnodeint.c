#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at idx
 * @h: The head of the DLL
 * @idx: The index
 * @n: The number to insert
 *
 * Return: The address or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = NULL, *new_node = NULL;
	unsigned int iter_times = 0, length = 0;

	if (h == NULL)
		return (NULL);

	if (*h == NULL && idx == 0)
		return (add_dnodeint(h, n));

	length = dlistint_len(*h);
	if (idx == 0)
		return (add_dnodeint(h, n));
	else if (length == idx)
		return (add_dnodeint_end(h, n));

	current = *h;
	while (current != NULL)
	{
		if (iter_times == idx)
		{
			new_node = create_node(n, current, current->prev);
			current->prev = new_node;
			current = new_node;
			current->prev->next = new_node;
			return (new_node);
		}

		current = current->next;
		++iter_times;
	}

	return (current);
}

/**
 * dlistint_len - Counts DLL elements
 * @h: The DLL to count
 *
 * Return: Number of elements in the DLL
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		++len;
		h = h->next;
	}

	return (len);
}

/**
 * create_node - Create a new node with values
 * @n: The number of the new node
 * @next: The next node of the new node
 * @prev: The previous node of the new node
 *
 * Return: The address of the new node created
 */
dlistint_t *create_node(unsigned int n, void *next, void *prev)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = next;
	new_node->prev = prev;
	return (new_node);
}
