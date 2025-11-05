#include "main.h"

/**
 * check_cmp - cmp through s1 s2
 * @s1: main string
 * @s2: string with wildcrd
 * @i: index s1
 * @j: index s2
 * Return: 1 or 0
 */
int check_cmp(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0')
	{
		if (s2[j] == '\0')
		return (1);
		if (s2[j] == '*')
			return (check_cmp(s1, s2, i, j + 1));
	}
	if (s1[i] == s2[j])
		return (check_cmp(s1, s2, i + 1, j + 1));
	if (s2[j] == '*')
		return ((check_cmp(s1, s2, i, j + 1))
				|| (check_cmp(s1, s2, i + 1, j)));
	return (0);
}

/**
 * wildcmp - compare 2 strings
 * @s1: main s
 * @s2: matching s
 * Return: 1 or 0
 */

int wildcmp(char *s1, char *s2)
{
	return (check_cmp(s1, s2, 0, 0));
}
