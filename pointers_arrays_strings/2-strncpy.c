#include "main.h"

/**
 * _strncpy - copy n char to dest
 * @dest: receptor
 * @src: source to copy from
 * @n: copy n char
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}
	return (dest);
}
