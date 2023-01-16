#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: string to check
 *
 * Return: interger
 */
int _atoi(char *s)
{
	int i, x, y, brk;

	x = 0;
	y = -1;
	brk = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			y = y * -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			x = x * 10;
			x -= (s[i] - '0');
			brk = 1;
		}
		else if (brk == 1)
			break;
	}
	x = y * x;
	return (x);
}
