#include "main.h"

/**
 * _puts_recursion - _puts
 * @s: string to print
 * Return: none
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s++);
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}
