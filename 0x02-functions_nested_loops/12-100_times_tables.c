#include "holberton.h"
/**
 * ft_putnbr - prints number by recalling self dividing by 10 modulo 10
 * @n: the value to translate into writing number
 * Return: none
 */
void ft_putnbr(int n)
{
	if (n <= 9)
	{
		_putchar(n + '0');
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		_putchar(n % 10 + '0');
	}
}
/**
 * print_times_table - print N tables
 * @n: N tables given
 * Return: none
 */
void print_times_table(int n)
{
	int i = 0;
	int j;
	int calc;

	if (n > 0 && n < 15)
	{
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				calc = j * i;
				if (calc <= 99 && j > 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				if (calc < 10 && j > 0)
					_putchar(' ');
				if (calc >= 100)
					_putchar(' ');
				ft_putnbr(calc);
				if (j < n)
				_putchar(',');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
