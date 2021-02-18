#include "holberton.h"
/**
 * print_number - display the number contained in an int
 * @n: int to print
 * Return: none
 */
void print_number(int n)
{
	unsigned int nb;

	nb = n;
	if (n < 0)
	{
		_putchar('-');
		nb = -n;
	}
	if (nb <= 9)
		_putchar(nb + '0');
	if (nb > 9)
	{
		print_number(nb / 10);
		_putchar(nb % 10 + '0');
	}
}
