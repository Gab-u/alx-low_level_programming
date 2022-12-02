#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at index
 * @head: First node
 * @index: Position to delete
 *
 * Return: 1 success, -1 Fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *ptr, *new;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		new = (*head)->next;
		free(*head);
		*head = new;
		return (1);
	}
	ptr = *head;
	for (x = 0; x < index - 1; x++)
	{
		if (ptr->next == NULL)
			return (-1);
		ptr = ptr->next;
	}
	new = ptr->next;
	ptr->next = new->next;
	free(new);
	return (1);
}
