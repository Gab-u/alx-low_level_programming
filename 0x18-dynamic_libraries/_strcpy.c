#include "main.h"

/**
 * *_strcpy - Copies a string
 * @dest: Copy location
 * @src: Copy source
 *
 * Return: Copied string
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x]; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}
