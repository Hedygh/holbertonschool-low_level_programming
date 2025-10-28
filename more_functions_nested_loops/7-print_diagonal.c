#include "main.h"

/**
 * print_diagonal - diag
 * @n: numbers of line
 * Return: none
 */
void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n > 0)
	{
		while (i <= n)
		{
			j = 0;
			while (j <= i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
