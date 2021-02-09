#include "holberton.h"
/**
 * _isalpha - check for alphabetic characters
 * @c: value to check
 * Return: 1 for alphabetic character  and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
