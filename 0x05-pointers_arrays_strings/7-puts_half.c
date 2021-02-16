#include "holberton.h"
/**
 * _strlen - return the lenght of string
 * @s: string to mesure
 *
 * Return: lenght value
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
/**
 * puts_half - print second half of string
 * @str: string to print
 *
 * Return: None
 */
void puts_half(char *str)
{
	int lenght = _strlen(str);
	int i;

	i = lenght / 2;

	while (i < lenght)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
