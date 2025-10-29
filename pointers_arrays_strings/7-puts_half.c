#include "main.h"

/**
 * _strlen - lenght of string
 * @s: lenght
 *
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * puts_half - print half of string
 * @str: string
 * Return: none
 */
void puts_half(char *str)
{
	int l = _strlen(str) + 1;
	int h = l / 2;

	while (h < l)
	{
		_putchar(str[h]);
		h++;
	}
	_putchar('\n');
}
