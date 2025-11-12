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
 * string_nconcat - concatenate 2 strings to n lenghts of s2
 * @s1: base s
 * @s2: string to concatenate
 * @n: n char to concatenate
 * Return: new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	int lgt;
	unsigned int dif;
	char *str;

	lgt = _strlen(s1) + _strlen(s2);
	if (n < _strlen(s2))
	{
		dif = _strlen(s2) - n;
		lgt -= dif;
	}
	str = malloc(sizeof(char) * lgt + 1);

	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] && j < n)
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
