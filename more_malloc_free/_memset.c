#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: memory area to fill
 * @b: byte use to fill
 * @n: n
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
