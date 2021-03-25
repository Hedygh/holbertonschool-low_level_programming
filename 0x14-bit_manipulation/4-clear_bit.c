#include "holberton.h"
/**
 * clear_bit - set value of bit to 0 at index
 * @n: pointer to num
 * @index: index
 * Return: 1 or -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n &= ~(1 << index);
}
