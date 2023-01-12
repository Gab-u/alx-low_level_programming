#include "lists.h"

/**
 * get_dnodeint_at_index - Returns nth node at index
 * @head: Head
 * @index: Index of list starting at 0
 *
 * Return: Value at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}

	return (head);
}
