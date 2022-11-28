#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Number of elements
 * @h: pointer
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr;
	unsigned int element = 0;

	ptr = h;
	while (ptr)
	{
		element++;
		ptr = ptr->next;
	}
	return (element);
}
