#include "main.h"

/**
 * _print_rev_recursion - print reverse
 * @s: string to print
 * Return: none
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(++s);
	_putchar(*s);
}
