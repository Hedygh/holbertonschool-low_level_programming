#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - create array of int from min to max
 * @min: start value of the array
 * @max: end value of the array
 * Return: the array if no error
 */
int *array_range(int min, int max)
{
	int *tab;
	int i = 0;
	int sum = max - min + 1;

	if (min > max)
		return (0);

	tab = malloc(sizeof(int) * (sum));
	if (!tab)
		return (0);

	while (i < sum)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
