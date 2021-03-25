#include "holberton.h"
/**
 * print_binary - convert ulint to binary and print the result
 * @n: value to convert
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n / 2);
	_putchar(n % 2 + '0');
}
