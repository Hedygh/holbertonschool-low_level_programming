#include "main.h"

/**
 * _strncat - concatenate 2 strings
 * @dest: string that receive
 * @src: source string
 * @n: n char to copy
 * Return: pointer to new string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
		i++;
	while (src[j] && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
