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
	_putchar(str[i]);
	i = i + 2;
	}
	_putchar('\n');
}
