#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Delete head node
 * @head: First node
 *
 * Return: Node
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int x;

	if (*head == NULL)
		return (0);

	ptr = *head;
	*head = ptr->next;
	x = ptr->n;
	free(ptr);
	return (x);
}
