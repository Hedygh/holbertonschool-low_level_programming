#include "main.h"
/**
 * print_num_recursive - print num of any lenght
 * @n: int to print
 * Return: none
 */

void print_num_recursive(int n)
{
	if (n >= 10)
		print_num_recursive(n / 10);
	_putchar(n % 10 + '0');
}

/**
 * print_times_table - times table of n
 * @n: n times tables
 * Return: none
 */
void print_times_table(int n)
{
	int i = 0;
	int j = 0;
	int res;

	if (n >= 0 && n <= 15)
	{
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				res = j * i;
				if (res < 100 && j > 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				if (res < 10 && j > 0)
				{
					_putchar(' ');
				}
				if (res >= 100)
					_putchar(' ');
				print_num_recursive(res);
				if (j < n)
					_putchar(',');
				j++;
			}
			i++;
			_putchar('\n');
		}
	}
}
