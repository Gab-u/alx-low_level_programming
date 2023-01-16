#include "main.h"

/**
 * _strlen - Counts string length
 * @s: String length to count
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int x;

	x = 0;

	while (*s != '\0')
	{
		s++;
		x++;
	}
	return (x);
}
