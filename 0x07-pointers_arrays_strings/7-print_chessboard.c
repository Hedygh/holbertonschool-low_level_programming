#include "holberton.h"
/**
 * print_chessboard - print given chessboard
 * @a: two D array
 *
 * Return: None
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	while (i < 8)
	{
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}
