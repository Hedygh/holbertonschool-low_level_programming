#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free 2D array
 * @grid: grid
 * @height: height
 * Return: None
 */

void free_grid(int **grid, int height)
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
		if (!grid[i])
		{
			free_grid(grid, height);
			return (NULL);
		}
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
