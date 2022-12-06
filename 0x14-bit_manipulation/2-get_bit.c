#include "main.h"

/**
 * get_bit - value of bit at index
 * @n: decimal parameter
 * @index: index
 * Return: bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int x;

	x = (n >> index);
	if (index > 32)
		return (-1);
	return (x & 1);
}
