#include "main.h"

/**
 * _isalpha - check for maj
 * @c: char value
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
