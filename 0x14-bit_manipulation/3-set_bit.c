#include "holberton.h"

/**
 * set_bit - set value of bit to 1 at given index
 * @n: number
 * @index: index
 *
 * Return: 1 or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n |= 1 << index;
	return (1);
}
