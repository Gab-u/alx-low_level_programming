#include <unistd.h>

/**
 * _putchar - prints a character to the stdout
 * @c: character tobe printed
 * Return: on success 1
 * otherwise return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
