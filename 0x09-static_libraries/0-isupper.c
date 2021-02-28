#include "holberton.h"
/**
 * _isupper - check for upper char
 * @c: character sent to check
 * Return: 1 for upper char else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
