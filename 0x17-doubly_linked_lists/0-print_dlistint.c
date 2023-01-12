#include "lists.h"

/**
 * print_dlistint - prints elements of list
 * @h: head
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int node_num = 0;

	if (h == NULL)
		return (node_num);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node_num++;
		h = h->next;
	}
	return (node_num);
}
