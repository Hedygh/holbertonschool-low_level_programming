#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicate string
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string or 0 if str is null or fail
 */

char *_strdup(char *str)
{
	char *dest;
	int i = 0;

	if (str == 0)
		return (0);

	while (str[i])
		i++;
	dest = malloc(sizeof(char) * i + 1);
	if (!dest)
		return (0);
	i = 0;

	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
