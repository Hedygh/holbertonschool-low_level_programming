#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - apply func to each element of array
 * @array: array
 * @size: size
 * @action: ptr to f
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!array || !size || !action)
		return;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
