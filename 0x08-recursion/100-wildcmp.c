#include "holberton.h"
/**
 * is - compare string with wildcard string
 * @s1: string
 * @s2: string with wildcards
 * @i: index
 * @j: index
 * Return: 1 if identical else 0
 */

int is(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);

	if (s2[j] == s1[i])
		return (is(s1, s2, i + 1, j + 1));
	if (s2[j] == '*')
		return ((is(s1, s2, i, j + 1)) || (is(s1, s2, i + 1, j)));
	if (s1[i] != s2[j])
		return (0);
	return (0);
}
/**
 * wildcmp - compare string with wildcard string
 * @s1: string
 * @s2: string with wildcards
 * Return: 1 if identical else 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	return (is(s1, s2, 0, 0));
}
