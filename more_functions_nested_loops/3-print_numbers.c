#include "main.h"

/**
 * print_numbers - print num 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int i = '0';

	while (i <= '9')
		_putchar(i++);
	_putchar('\n');
}
