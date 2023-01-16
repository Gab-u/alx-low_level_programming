#include "main.h"

/**
 * _memcpy -Copies n number of bytes
 * @dest: Copy location
 * @src: string to be copied
 * @n: number of bytes
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
