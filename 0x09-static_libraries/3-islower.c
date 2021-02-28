#include "holberton.h"
/**
 * _islower - check the character for lowercase
 * @c: value to check
 * Return: 1 for lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
