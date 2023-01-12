#include "lists.h"

/**
 * dlistint_len - Returns number of nodes
 * @h: Head
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int node_num = 0;

	if (h == NULL)
		return (node_num);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		node_num++;
		h = h->next;
	}
	return (node_num);
}
