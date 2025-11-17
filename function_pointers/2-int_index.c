#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - compare element of array
 * @array: array
 * @size: size
 * @cmp: f cmp
 * Return: -1 or 0 or index to first cmp match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array || size <= 0 || !cmp)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
