#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
 * str_concat - concat s1 & s2 in memory
 * @s1: strg
 * @s2: strg
 * Return: ptr to new s
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *dest;

	if (!s1 || !s2)
		return (0);
	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	dest = malloc(sizeof(char) * _strlen(s1) + _strlen(s2) + 1);
	if (!dest)
		return (0);
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		dest[i] = s2[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
