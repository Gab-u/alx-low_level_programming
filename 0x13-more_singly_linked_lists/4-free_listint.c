#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Frees list
 * @head: First node
 */
void free_listint(listint_t *head)
{
	listint_t *ptr, *_ptr;

	ptr = head;
	while (ptr != NULL)
	{
		_ptr = ptr->next;
		free(ptr);
		ptr = _ptr;
	}
}
