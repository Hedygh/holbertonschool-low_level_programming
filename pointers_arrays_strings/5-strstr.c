#include "main.h"

/**
 * _strstr - find needle in hays
 * @haystack: string to search
 * @needle: string to find
 * Return: first occurence of needle
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	if (!needle[0])
		return (haystack);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j])
		{
			if (needle[j + 1] == '\0')
				return (&haystack[i]);
			j++;
		}
		i++;
	}
	return (0);
}
