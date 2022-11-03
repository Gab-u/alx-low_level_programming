#include "main.h"

/**
 * _increaseVar - increase i to find sqrt
 * @i: starts at q
 * @n: the number to find its sqrt
 * Return: i, 1 or -1
 */
int _increaseVar(int i, int n)
{
	if (i * i == n)
		return (i);
	if (i * i < n)
		return (_increaseVar(i + 1, n));
	if (i * i > n)
		return (-1);
	return (i);
}

/**
 * _sqrt_recursion - find sqrt
 * @n: number
 * Return: -1, 0 or sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n > 1)
	{
		return (_increaseVar(1, n));
	}
	return (-1);
}
