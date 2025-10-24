#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
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
 * main - Entry
 * Description: sum of all multiple of 3/5 under 1024
 * Return: 0
 */

int main(void)
{
	int i = 1024;
	int sum = 0;

	while (i > 0)
	{
		if ((i % 5 == 0) || (i % 3 == 0))
			sum = i + sum;
		i--;
	}
	print_num_recursive(sum);
	_putchar('\n');
	return (0);
}
