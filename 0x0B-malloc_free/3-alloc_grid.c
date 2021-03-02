#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocate memory for 2d array of int
 * @width: columns
 * @height: rows
 * Return: pointer to 2d arrays created
 */
int **alloc_grid(int width, int height)
{
	int **tab;
	int i = 0;
	int j = 0;

	tab = malloc(sizeof(int *) * height);
	if (!tab)
		return (0);
	while (i < height)
	{
		tab[i] = malloc(sizeof(int) * width);
		i++;
	}
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
	return (tab);
}
