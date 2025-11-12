#include <stdlib.h>
#include "main.h"

/**
 * _strlen - len
 * @s: s
 * Return: lenght
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * string_nconcat - concatenate s1 with first n bytes of s2
 * @s1: base string (treated as "" if NULL)
 * @s2: string to take from (treated as "" if NULL)
 * @n:  number of bytes to take from s2
 * Return: newly allocated "s1 + first n of s2" (NULL on failure)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	unsigned int lgt;
	unsigned int dif;
	int len1;
	int len2;
	char *str;

	i = 0;
	j = 0;
	dif = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	lgt = (unsigned int)(len1 + len2);
	if (n < (unsigned int)len2)
	{
		dif = (unsigned int)len2 - n;
		lgt -= dif;
	}
	str = (char *)malloc(lgt + 1);
	if (str == NULL)
		return (NULL);
	while (i < (unsigned int)len1)
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
