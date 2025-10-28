#include "main.h"

/**
 * print_number - print num recurs
 * @n: int to print
 * Return: none
 */
void print_number(int n)
{
	int x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -x;
	}
	if (x <= 9)
		_putchar(x + '0');
	if (x >= 10)
	{
		print_number(x / 10);
		_putchar(x % 10 + '0');
	}
}
