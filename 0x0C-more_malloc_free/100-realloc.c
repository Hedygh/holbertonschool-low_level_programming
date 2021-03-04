#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * malloc_checked - allocate n bytes to memory
 * @b: bytes to allocate
 * Return: void pointer to memory space or null if fail
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (!p)
		exit(98);
	return (p);
}

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
/**
 * _realloc - reallocate memory block
 * @ptr: initial block
 * @old_size: size of ptr
 * @new_size: size of reallocation
 * Return: ptr if newsize is inf, 0 if newsize is null
 * new allocated block if success
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (!ptr)
		return (malloc_checked(new_size));

	if (new_size <= old_size)
		return (ptr);

	if (new_size == 0)
	{
		free(ptr);
		return (0);
	}

	p = malloc(new_size);
	if (!p)
		return (0);

	p = _memcpy(p, ptr, old_size);
	free(ptr);
	return (p);
}
