#include "holberton.h"
/**
 * puts2 - print every other char of a string
 * @str: string to work on
 * Return: None
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
	_putchar('\n');
}
