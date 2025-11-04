#include "main.h"

/**
 * calc - helper to find sqrt
 * @n: number
 * @j: finder
 * Return: res
 */

int calc(int n, int j)
{
	if (j * j == n)
		return (j);
	if (j * j > n)
		return (-1);
	return (calc(n, ++j));
}
/**
 * _sqrt_recursion - square root recursive
 * @n: n number
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	if (n == 1)
		return (1);
	return (calc(n, 1));
}
