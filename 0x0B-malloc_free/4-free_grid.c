#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - free 2d array of int
 * @grid: array
 * @height: row of array
 * Description: free every elements of array then the whole array
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
