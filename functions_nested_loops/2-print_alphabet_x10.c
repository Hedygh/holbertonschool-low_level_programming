#include "main.h"

/**
 * print_alphabet_x10 - x10
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	while (i <= 9)
	{
		while (c <= 'z')
			putchar(c++);
		putchar('\n');
		c = 'a';
		i++;
	}
}
