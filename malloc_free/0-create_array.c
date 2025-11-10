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

	if (size == 0)
		return (0);
	char *array = malloc(sizeof(char) * size);

	if (!array)
		return (0);
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
