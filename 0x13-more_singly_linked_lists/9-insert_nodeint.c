#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Insert node at index
 * @head: First node
 * @idx: Node position
 * @n: int value
 *
 * Return: Node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *temp;
	unsigned int x;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
		for (x = 0; x < idx - 1 && temp != NULL; x++)
			temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}
	ptr->next = temp->next;
	temp->next = ptr;
	return (ptr);
}
