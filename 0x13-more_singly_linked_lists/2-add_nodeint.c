#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds node at end
 * @head: first node
 * @n: Int
 *
 * Return: node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
