#include "main.h"

/**
 * _memcpy - copies n byte from src to dest
 * @dest: dst
 * @src: src
 * @n: n bytes
 * Return: dest
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
