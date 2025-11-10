#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - 2D array of int
 * @width: array's width
 * @height: array's height
 * Return: array or NULL
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (!grid)
		return (NULL);

	while (i < height)
	{
		grid[i] = malloc(sizeof(int) * width);
		i++;
	}
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
			grid[i][j++] = 0;
		i++;
	}
	return (grid);
}
