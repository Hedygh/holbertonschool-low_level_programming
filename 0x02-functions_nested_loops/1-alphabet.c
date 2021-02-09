#include "holberton.h"
/**
 * print_alphabet - display alphabet
 *
 * Return void
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
		_putchar(a++);
	_putchar('\n');
}
