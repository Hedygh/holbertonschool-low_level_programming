#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_alphabet - Entry
 *
 * Return: Void
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
		_putchar(c++);
	_putchar('\n');
}
