#include "holberton.h"
/**
 * _strcmp - compare two string
 * @s1: string to compare
 * @s2: string to compare
 * Return: value of character difference
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
