/**
 * print_diagsums - add diagonals value in a squared matrix of int
 * @a: matrix square
 * @size: size of square
 * Return: none
 */
#include <stdio.h>
#include "holberton.h"

void print_diagsums(int *a, int size)
{
	int j = 0;
	int sizez = size * size;
	int i = sizez - size;
	int sum = 0;
	int sum2 = 0;

	while (j < sizez)
	{
		sum += a[j];
		j += size + 1;
		sum2 += a[i];
		i -= (size - 1);
	}
	printf("%d, %d\n", sum, sum2);
}
