#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

#include "holberton.h"
/**
 * _free_grid - free 2d array of int
 * @grid: array
 * @height: row of array
 * Description: free every elements of array then the whole array
 * Return: None
 */

void _free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
	free(grid[i]);
	i++;
	}
	free(grid);
}

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
		{
			_free_grid(tab, height);
			return (NULL);
		}
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
