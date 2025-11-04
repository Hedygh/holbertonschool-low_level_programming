#include "main.h"

/**
 * _strlen_recursion - len recursion
 * @s: string
 * Return: lenght
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}

/**
 * check_palindrome - check
 * @s: string
 * @i: start of s
 * @j: end of s
 * Description: go from left to right and right to left
 * Return: 1 or 0
 */

int check_palindrome(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	if (s[i] != s[j])
		return (0);
	return (check_palindrome(s, i + 1, j - 1));
}

/**
 * is_palindrome - check for palindrome
 * @s: string to check
 *
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int lenght = _strlen_recursion(s);

	if (lenght < 1)
		return (0);
	return (check_palindrome(s, 0, lenght - 1));
}
