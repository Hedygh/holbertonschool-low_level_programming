#include "main.h"

/**
 * calc - find if prime num
 * @n: number to check
 * @j: multiplier
 * Return: 1 or 0
 */

int calc(int n, int j)
{
	if (n % j == 0)
		return (0);
	if (j * j > n)
		return (1);
	return (calc(n, ++j));
}
/**
 * is_prime_number - prime num
 * @n: number to check
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (calc(n, 2));
}
