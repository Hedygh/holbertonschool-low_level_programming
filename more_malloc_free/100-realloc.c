#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

/**
 * _realloc - _realloc memory
 * @ptr: ptr to new memory
 * @old_size: old size of ptr
 * @new_size: new size
 * Return: ptr to new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (!ptr)
		return (malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (0);
	}
	if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (!p)
		return (0);
	_memcpy(p, ptr, old_size);
	free(ptr);
	return (p);
}
