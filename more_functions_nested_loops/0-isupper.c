#include "main.h"

/**
 * isupper - check for uppercase
 * @c: int to check
 * Return: 1 for upper else 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
