#include "lists.h"

/**
 * find_listint_loop - finds loops
 * @head: link list head
 *
 * Return: addr or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr = head;
	listint_t *ptr2 = head;

	if (head == NULL)
		return (NULL);

	while (ptr && ptr2 && ptr2->next)
	{
		ptr2 = ptr2->next->next;
		ptr = ptr->next;
		if (ptr == ptr2)
		{
			ptr = head;
			while (ptr != ptr2)
			{
				ptr = ptr->next;
				ptr2 = ptr2->next;
			}
			return (ptr2);
		}
	}
	return (NULL);
}
