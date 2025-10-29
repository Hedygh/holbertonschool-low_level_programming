#include "main.h"

/**
 * puts2 - str with one every other char
 * @str: string to use
 * Return: none
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar ('\n');
}
