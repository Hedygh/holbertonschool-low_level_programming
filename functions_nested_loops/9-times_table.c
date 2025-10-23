#include "main.h"
#include<stdio.h>
/**
 * times_table - print 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int i = 0;
	int j = 0;
	int x = 0;
	int sum;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			sum = x * j;
			if (sum <= 9 && j != 0)
				_putchar(' ');
			if (sum >= 10)
				_putchar(sum / 10 + '0');
			_putchar(sum % 10 + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		x = x + 1;
		i++;
	}
}
