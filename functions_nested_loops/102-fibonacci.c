#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
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
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long int x = 0;
	long int j = 1;
	long int res;

	while (i < 50)
	{
		res = x + j;
		print_num_recursive(res);
		if (i < 49)
		{
			_putchar(',');
			_putchar(' ');
		}
		x = j;
		j = res;
		i++;
	}
	_putchar('\n');
	return (0);
}
