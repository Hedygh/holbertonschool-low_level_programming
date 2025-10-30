#include "main.h"

/**
 * _strcmp - compare 2 strings
 * @s1: s1
 * @s2: s2
 *
 * Return: differences between unmatching char
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
