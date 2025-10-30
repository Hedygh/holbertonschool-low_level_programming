#include "main.h"

/**
 * _strcat - concatenate 2 strings
 * @dest: string that receive
 * @src: source string
 * Return: pointer to new string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
