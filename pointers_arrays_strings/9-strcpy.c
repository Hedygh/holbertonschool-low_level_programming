#include "main.h"

/**
 * _strcpy - copy src to dst
 * @dest: string receiving copy
 * @src: string to copy from
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
