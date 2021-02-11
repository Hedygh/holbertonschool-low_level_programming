#include "holberton.h"
/**
 * print_number - display the number contained in an int
 * @n: int to print
 * Return: none
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n <= 9)
		_putchar(n + '0');
	if (n > 9)
	{
		print_number(n / 10);
		_putchar(n % 10 + '0');
	}
}
