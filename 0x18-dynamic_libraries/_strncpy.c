#include "main.h"

/**
 * _strncpy - Copies n bytes of string
 * @dest: pointer for array
 * @src: pointer for array
 * @n: number of bytes to copy
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; src[x] != '\0' && x < n; x++)
	{
		dest[x] = src[x];
	}
	for ( ; x < n; x++)
	{
		dest[x] = '\0';
	}
	return (dest);
}
