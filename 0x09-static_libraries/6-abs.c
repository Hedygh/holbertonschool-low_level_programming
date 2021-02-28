#include "holberton.h"

/**
 * _abs - computes absolute value of an integer
 * @i: the integer to compute
 * Return: integer value
 */
int _abs(int i)
{
	if (i < 0)
		i = -1 * i;
	return (i);
}
