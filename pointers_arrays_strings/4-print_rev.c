#include "main.h"

/**
 * print_rev - reverse string
 * @s: string to rev
 * Return: none
 */

void print_rev(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i])
		i++;
	i = i - 1;
	while (j <= i)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar(10);
}
