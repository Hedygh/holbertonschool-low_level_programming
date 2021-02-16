#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print n elements of an array of integers
 * @a: array of int
 * @n: number of elements to print
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
