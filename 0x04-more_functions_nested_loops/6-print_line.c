#include "holberton.h"
/**
 * print_line - print n lines
 * @n: number of line to print
 * Return: none
 */
void print_line(int n)
{
	int i;

	if (n >= 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
