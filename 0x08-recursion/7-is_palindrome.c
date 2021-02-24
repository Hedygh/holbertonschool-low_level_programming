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
/**
 * check_palindrome - check if the string is palindrome
 * @str: string
 * @i: index start
 * @lght: indext lenght (end)
 * Return: 1 if palindrome else 0
 */

int check_palindrome(char *str,  int i, int lght)
{
	if (str[i] != str[lght])
		return (0);

	if (i < lght + 1)
		return (check_palindrome(str, i + 1, lght - 1));
	return (1);
}
/**
 * is_palindrome - check if the string is palindrome
 * @s: string
 * Return: 1 if palindrome else 0
 */
int is_palindrome(char *s)
{
	int lght = _strlen_recursion(s);

	if (lght == 0)
		return (1);

	return (check_palindrome(s, 0, lght - 1));
}
