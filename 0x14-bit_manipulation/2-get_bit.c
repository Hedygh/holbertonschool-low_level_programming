#include "holberton.h"
/**
 * get_bit - find bit at given index
 * @n: number to check
 * @index: index
 * Return: bit found
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (index > 64)
		return (-1);
	i = (n >> index) & 1;

	return (i);
}
