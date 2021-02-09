#include "holberton.h"
/**
 * print_last_digit - modulo to get last digit
 * @i: digit to work on
 * Return: Value of last digit
 */
int print_last_digit(int i)
{
	int j;

	if (i < 0)
	{
	i = -1 * i;
	j = i % 10;
	_putchar(j + '0');
	}
	else
	{
		j = i % 10;
		_putchar(j + '0');
	}
	return (j);
}
