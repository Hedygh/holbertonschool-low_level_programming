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
