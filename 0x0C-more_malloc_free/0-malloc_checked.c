#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
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
