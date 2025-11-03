#include "main.h"

/**
 * _strspn - n bytes from accept in s
 * @s: main string
 * @accept: bytes to find
 * Return: lenght of bytes found
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i])
	{
		j = 0;
		while (accept[j] != s[i])
		{
			if (accept[j] == '\0')
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}
