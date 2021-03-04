#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - lenght of string
 * @s: string to evaluate
 * Return: lenght value
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
/**
 * string_nconcat - concat s1 to s2 for n bytes of s2 to s3
 * @s1: base string
 * @s2: string to append
 * @n: bytes limits
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i = 0;
	unsigned int j = 0;
	int lenght = _strlen(s1) + _strlen(s2);
	int minus = 0;

	if (n < _strlen(s2))
	{
		minus = _strlen(s2) - n;
		lenght -= minus;
	}
	if (_strlen(s1) == 0 || _strlen(s2) == 0)
		return (0);
	s3 = malloc(sizeof(char) * lenght + 1);
	if (!s3)
		return (0);

	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j] && j < n)
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	s3[i] = '\0';
	return (s3);
}
