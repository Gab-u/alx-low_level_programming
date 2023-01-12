#include "lists.h"

/**
 * add_dnodeint_end - Adds new node at end of list
 * @head: Head
 * @n: Int value in list
 *
 * Return: Address of new node, else NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = new;
	}
	else
		*head = new;

	new->prev = h;

	return (new);
}
