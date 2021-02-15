#include "holberton.h"
/**
 * print_rev - print reverse string
 * @s: string to reverse
 *
 * Return: none
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	i++;
	i = i - 1;

	while (s[i] != 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
