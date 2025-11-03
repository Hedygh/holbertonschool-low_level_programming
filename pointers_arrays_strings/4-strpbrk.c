#include "main.h"

/**
 * _strpbrk - locate first occurence of acc in s
 * @s: string to search
 * @accept: string to check from
 * Return: pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			return (&s[i]);
			j++;
		}
		i++;
	}
	return (0);
}
