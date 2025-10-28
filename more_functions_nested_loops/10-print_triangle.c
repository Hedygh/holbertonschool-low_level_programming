#include "main.h"

/**
 * print_triangle - tr
 * @size: triangle size
 * Return: none
 */
void print_triangle(int size)
{
	int i = 0;
	int j = 0;
	int k = 1;
	int tmp;
	int n = size - 1;

	while (i < size)
	{
		while (j < n)
		{
			_putchar(' ');
			j++;
		}
		n--;
		j = 0;
		tmp = k;
		while (k > j)
		{
			_putchar('#');
			k--;
		}
		k = tmp + 1;
		i++;
		_putchar('\n');
	}
	if (size == 0)
		_putchar('\n');
}
