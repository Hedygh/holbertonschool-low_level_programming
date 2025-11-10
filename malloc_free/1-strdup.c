#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	int l = strlen(str);
	char *dest = malloc(sizeof(char) * l + 1);

	while (i < l)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
