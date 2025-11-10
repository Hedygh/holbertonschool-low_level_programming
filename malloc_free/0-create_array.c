#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - array of chars
 * @size: size array
 * @c: char
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (!array)
		return (NULL);
	while (i < size)
		array[i++] = c;
	return (array);
}
