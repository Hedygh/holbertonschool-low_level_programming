#include "holberton.h"
/**
 * _sqrt2 - find square root of number recursively
 * @n: given number
 * @i: index from 1
 * Return: square root
 */
int _sqrt2(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt2(n, i + 1));
}
/**
 * _sqrt_recursion - find square root of number recursively
 * @n: given number
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	if (n == 1)
		return (1);
	return (_sqrt2(n, 1));
}
