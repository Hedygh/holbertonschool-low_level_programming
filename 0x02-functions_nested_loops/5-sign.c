#include "holberton.h"
/**
 * print_sign - check the number for positive or negative
 * @n: value of number
 * Return: 1 for positive and 0 for zero and -1 for negative
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
}
