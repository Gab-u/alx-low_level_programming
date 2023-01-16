#include "main.h"

/**
 * _isalpha - checks if character is an alphabet
 * @c: Character to be checked
 *
 * Return: 1 if c is an alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
