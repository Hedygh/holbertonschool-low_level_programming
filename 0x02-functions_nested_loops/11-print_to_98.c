#include "holberton.h"
/**
 * ft_putnbr - prints number by recalling self dividing by 10 modulo 10
 * @n: the value to translate into writing number
 * Return: none
 */
void ft_putnbr(int n)
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
		ft_putnbr(n / 10);
		_putchar(n % 10 + '0');
	}
}
/**
 * print_to_98 - print passed numbers untill 98
 * @n: number passed to function
 * Description: check first above 98 then check under
 * Return: None
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98)
		{
			ft_putnbr(n);
			if (n > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
		_putchar('\n');
	}
	else if (n < 98)
	{
		while (n < 99)
		{
			ft_putnbr(n);
			if (n < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
		_putchar('\n');
	}
}
