#include "main.h"

/**
 * _strspn - length of prefix substring
 * @s: string pointer
 * @accept: substring pointer
 *
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	char *y = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept - 1))
			{
				x++;
				break;
			}
		if (!(*--accept))
			break;
		accept = y;
	}
	return (x);
}
