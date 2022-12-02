#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - Provides list length
 * @h: pointer
 *
 * Return: length
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	unsigned int x = 0;

	ptr = h;
	while (ptr)
	{
		x++;
		ptr = ptr->next;
	}
	return (x);
}
