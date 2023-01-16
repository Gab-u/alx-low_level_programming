#include "main.h"

/**
 * _strchr - Returns pointer to occurance of char
 * @s: pointer to string
 * @c: char
 *
 * Return: s if char occurs, 0 otherwise
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
