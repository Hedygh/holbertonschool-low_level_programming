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

	if (n > 0)
	{	
		while (i < n)
		{
			if (i < n - 1)
				printf("%d, ", a[i]);
			else
				printf("%d\n", a[i]);
			i++;
		}
	}
}
