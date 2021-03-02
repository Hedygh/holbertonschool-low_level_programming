#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocate memory for 2d array of int
 * @w: columns
 * @h: rows
 * Return: pointer to 2d arrays created
 */
int **alloc_grid(int w, int h)
{
	int **tab;
	int i = 0;
	int j = 0;

	tab = malloc(sizeof(int *) * h);
	if (!tab)
		return (0);
	while (i < h)
	{
		tab[i] = malloc(sizeof(int) * w);
		i++;
	}
	i = 0;
	while (i < h)
	{
		j = 0;
		while (j < w)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
	return (tab);
}
