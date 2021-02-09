#include "holberton.h"
/**
 * ft_putnbr - prints numbers
 * @i: int to print
 * Return: none
 */
void ft_putnbr(int i)
{
	if (i <= 9)
		_putchar(i + '0');
	if (i > 9)
	{
		ft_putnbr(i / 10);
		_putchar(i % 10 + '0');
	}
}
/**
 * main - sum of 3 and 5 multiples
 *
 * Return: always 0
 */
int main(void)
{
	int i = 0;
	int sum = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum = sum + i;
		i++;
	}
	ft_putnbr(sum);
	_putchar('\n');
	return (0);
}
