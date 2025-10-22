#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @x: int to check
 *
 * Return: value of last digit
 */

int print_last_digit(int x)
{
	int i = x % 10;

	if (i < 0)
		i = -i;
	_putchar(i + '0');
	return (i);
}
