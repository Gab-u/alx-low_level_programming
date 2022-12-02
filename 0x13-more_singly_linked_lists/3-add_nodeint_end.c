#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds node at end
 * @head: first node
 * @n: Int
 *
 * Return: node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	ptr = *head;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = temp;
	return (temp);
}
