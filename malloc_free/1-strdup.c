#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate string
 * @str: string
 * Return: allocated string
 */

char *_strdup(char *str)
{
	int i = 0;
	char *dest;

	if (str == NULL)
		return (NULL);
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
