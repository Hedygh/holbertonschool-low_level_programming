#include "main.h"

/**
 * _strchr - locate a char in a string
 * @s: string to search into
 * @c: char
 * Return: pointer to first occurence of c
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	if (s[i] == c)
		return (&s[i]);
	else
		return (0);
}
