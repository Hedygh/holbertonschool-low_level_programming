#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - point to cmp func for every element of array
 * @array: array to check
 * @size: size of the array
 * @cmp: pointer to function checks
 * Return: index of match or -1 if error or no match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array || !cmp)
		return;
	if (size <= 0)
		return (-1);

	while (i < size)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
