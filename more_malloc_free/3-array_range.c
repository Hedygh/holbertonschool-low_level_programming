#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - array of int
 * @min: min range
 * @max: max range
 * Return: ptr to array
 */

int *array_range(int min, int max)
{
	int *tab;
	int size;
	int i = 0;

	if (min > max)
		return (0);
	size = max - min + 1;

	tab = malloc(sizeof(int) * size);
	if (!tab)
		return (0);
	while (min <= max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
