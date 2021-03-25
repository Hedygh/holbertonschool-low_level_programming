#include "holberton.h"
/**
 * count_bit - count number of 1 bits
 * @res: number to check
 * Return: result of check
 */
int count_bit(int res)
{
	if (res <= 0)
		return (0);
	if (res & 1)
		return (count_bit(res >> 1) + 1);
	else
		return (count_bit(res >> 1));
}
/**
 * flip_bits - find numbers of bits to flip to have same num
 * @n: number 1
 * @m: number 2
 * Return: number of diff
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int res;

	res = n ^ m;

	return (count_bit(res));
}
