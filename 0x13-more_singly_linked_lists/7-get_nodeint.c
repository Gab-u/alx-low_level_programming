#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Finds node
 * @head: First node
 * @index: Node
 *
 * Return: Node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (head == NULL)
		return (NULL);

	for (x = 0; x < index; x++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
