#include "holberton.h"
/**
 * times_table - Prints 9 times tables
 *
 * Return: none
 */
void times_table(void)
{
	int i = 0;
	int j;
	int calc;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			calc = i * j;
			if (calc < 10 && j > 0)
				_putchar(' ');
			if (j > 0)
				_putchar(' ');
			if (calc < 10)
				_putchar(calc + '0');
			else
			{
				_putchar(calc / 10 + '0');
				_putchar(calc % 10 + '0');
			}
			if (j < 9)
				_putchar(',');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
