#include "holberton.h"
/**
 * print_square - print square using #
 * @size: size of the square
 * Return: none
 */
void print_square(int size)
{
	int i = 0;
	int j;

	if (size > 0)
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
	else if (size <= 0)
		_putchar('\n');
}
