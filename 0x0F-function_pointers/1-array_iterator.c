#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - point to function that affect elements of an array
 * @array: array to use function on
 * @size: size of the array
 * @action: pointer to function
 * Return: None
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!array || !size || !action)
		return;

	while (i < size)
	{
		(*action)(array[i]);
		i++;
	}
}
