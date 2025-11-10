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
 * _strdup - duplicate string
 * @str: string
 * Return: allocated string
 */

char *_strdup(char *str)
{
	if (!str)
		return (0);

	int i = 0;
	int l = _strlen(str);
	char *dest = malloc(sizeof(char) * l + 1);

	if (!dest)
		return (NULL);

	while (i < l)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
