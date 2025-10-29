#include "main.h"
#include<stdio.h>

/**
 * print_array - print array of int
 * @a: array
 * @n: number of int
 * Return: none
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
