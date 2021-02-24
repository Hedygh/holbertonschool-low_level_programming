#include "holberton.h"
/**
 * _strlen_recursion - find lenght of string using recursion
 * @s: string
 * Return: lenght
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return ((_strlen_recursion(s + 1)) + 1);
}
