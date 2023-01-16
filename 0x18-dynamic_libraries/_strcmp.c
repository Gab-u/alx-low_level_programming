#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: pointer for string
 * @s2: pointer for string
 *
 * Return: 0 if equal, negative if s2 > s1, positive if s1> s2
 */
int _strcmp(char *s1, char *s2)
{
	int x, y;

	x = 0;

	while (s1[x] == s2[x] && (s1[x] != '\0' || s2[x] != '\0'))
	{
		x++;
	}
	y = s1[x] - s2[x];
	return (y);
}
