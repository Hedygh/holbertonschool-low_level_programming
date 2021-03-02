#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocate memory for 2d array of int
 * @width: columns
 * @height: rows
 * Return: pointer to 2d arrays created if succeed
 */
int **alloc_grid(int width, int height)
{
	int **tab;
	int i;
	int j;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	tab = malloc(sizeof(int *) * height);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < height)
	{
		tab[i] = malloc(sizeof(int) * width);
		if (!tab[i])
			return (NULL);
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
