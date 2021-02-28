#include "holberton.h"
/**
 * _memcpy - copy n bytes from src memory area to dest memory area
 * @dest: pointer to dest area
 * @src: pointer to src area
 * @n: size to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
