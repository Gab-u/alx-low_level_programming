#include "main.h"

/**
 * _memset - Fills n bytes of memory
 * @s: pointer for string
 * @b: Char to use
 * @n: number of bytes
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		s[x] = b;
		x++;
	}
	return (s);
}
