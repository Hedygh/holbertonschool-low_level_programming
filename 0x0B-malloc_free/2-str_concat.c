#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - lenght
 * @str: string
 * Return: lenght value
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}
/**
 * str_concat - concatenate two strings with allocated memory
 * @s1: string to concat
 * @s2: string to concat
 * Return: if s is null return '\0' else return pointer to concat string
 */
char *str_concat(char *s1, char *s2)
{
	int len = _strlen(s1) + _strlen(s2);
	int i = 0;
	int j = 0;
	char *s3;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	s3 = malloc(sizeof(char) * len + 1);
		if (!s3)
			return (0);
	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		s3[i + j] = s2[j];
		j++;
	}
	s3[i + j] = '\0';
	return (s3);
}
