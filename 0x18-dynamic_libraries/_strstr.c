#include "main.h"

/**
 * _strstr - Locate substring
 * @haystack: pointer to string
 * @needle: pointer to substring
 *
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *ptr_str = haystack, *ptr_needle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (ptr_str);
		}
		needle = ptr_needle;
		ptr_str++;
		haystack = ptr_str;
	}
	return (0);
}
