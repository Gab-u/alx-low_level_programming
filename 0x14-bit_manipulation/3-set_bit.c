#include <stdlib.h>
#include "main.h"

/**
 * set_bit - sets value of bit to 1 at index
 * @n: pointer to int
 * @index: position to edit
 * Return: 1 is success, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
