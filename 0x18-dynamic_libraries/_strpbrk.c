#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches string for set of bytes
 * @s: string pointer
 * @accept: substring pointer
 *
 * Return: NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
