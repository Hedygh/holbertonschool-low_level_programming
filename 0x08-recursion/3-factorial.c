#include "holberton.h"
/**
 * factorial - find factorial of a given number
 * @n: given num
 * Return: factorial sum
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
