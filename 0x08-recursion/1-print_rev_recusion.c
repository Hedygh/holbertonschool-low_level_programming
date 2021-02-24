#include "holberton.h"
/**
 * _print_rev_recursion - print string in reverse using recursivity
 * @s: string to reverse print
 * Return: None
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
