#include "holberton.h"
/**
 * print_triangle - print triangle with #
 * @size: size of the triangle
 * Return: none
 */
void print_triangle(int size)
{
	int i = 0;
	int j = 0;
	int k = 1;
	int t = 0;
	int s = size - 1;

	if (size > 0)
	{
		while (i < size)
		{
			while (j < s)
			{
				_putchar(' ');
				j++;
			}
			s = s - 1;
			j = 0;
			t = k;
			while (k > j)
			{
				_putchar('#');
				k--;
			}
			k = t + 1;
			_putchar('\n');
			i++;
		}
	}
	else if (size <= 0)
		_putchar('\n');
}
