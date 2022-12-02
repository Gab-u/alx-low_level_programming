#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints singly linked list
 * @h: Pointer
 *
 * Return: List
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	unsigned int x = 0;

	ptr = h;
	while (ptr)
	{
		printf("%d\n", ptr->n);
		x++;
		ptr = ptr->next;
	}
	return (x);
}
