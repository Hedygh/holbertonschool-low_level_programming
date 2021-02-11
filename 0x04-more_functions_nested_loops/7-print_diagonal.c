#include "holberton.h"
/**
 * print_diagonal - print n \
 * @n: n times to print
 *
 * Return: none
 */
void print_diagonal(int n)
{
	int i = 0;
	int j;

	if(n > 0)
	{
		while (i < n)
		{
			j = 0;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else if (n <= 0)
		_putchar('\n');
}
