#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - alloc memory
 * @b: memory size
 *
 * Return: ptr
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}
