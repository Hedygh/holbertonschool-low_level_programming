#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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

/**
 * _calloc - allocate memory of array
 * @nmemb: number of elements
 * @size: size of array
 * Return: pointer to allocated memo
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (0);

	p = _memset(p, 0, nmemb * size);
	return (p);
}
