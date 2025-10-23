#include "main.h"
/**
 * print_num_recursive - print num of any lenght
 * @n: int to print
 * Return: none
 */

void print_num_recursive(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n >= 10)
		print_num_recursive(n / 10);
	_putchar(n % 10 + '0');
}

/**
 * print_to_98 - print all from n to 98
 * @n: number to start from
 * Return: 0
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98)
		{
			print_num_recursive(n);
			if (n > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
	else
	{
		while (n <= 98)
		{
			print_num_recursive(n);
			if (n < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	_putchar('\n');
}
