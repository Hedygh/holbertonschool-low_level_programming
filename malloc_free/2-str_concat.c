#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

	dest = malloc(sizeof(char) * strlen(s1) + strlen(s2) + 1);
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
