#include "main.h"

/**
 * reverse_array - reverse an array of int
 * @a: point to array
 * n: number of elements
 * Return: none
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int t;

	while (i < j)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
		i++;
		j--;
	}
}
