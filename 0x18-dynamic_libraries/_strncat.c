#include "main.h"

/**
 * _strncat - Concatenates 2 strings by n bytes
 * @dest: pointer to array
 * @src: pointer to array
 * @n: number of characters to concatenate
 *
 * Return: concatenated dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	y = 0;

	for (x = 0; x < 1000; x++)
	{
		if (dest[x] == '\0')
		{
			break;
		}
		y++;
	}
	for (x = 0; src[x] != '\0' && x < n; x++)
	{
		dest[x + y] = src[x];
	}
	dest[x + y] = '\0';
	return (dest);
}
