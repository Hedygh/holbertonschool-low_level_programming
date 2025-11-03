#include<stdio.h>
#include "main.h"

/**
 * print_diagsums - sum of two diagonals in a square
 * @a: square
 * @size: side size
 * Return: none
 */

void print_diagsums(int *a, int size)
{
	int num = 0;
	int size2 = size * size;
	int i = size2 - 1;
	int j = size2 - size;
	int sum = 0;
	int sum2 = 0;

	while (num < size)
	{
		sum += a[i];
		i -= (size + 1);
		sum2 += a[j];
		j -= (size - 1);
		num++;
	}
	printf("%d, %d\n", sum, sum2);
}
