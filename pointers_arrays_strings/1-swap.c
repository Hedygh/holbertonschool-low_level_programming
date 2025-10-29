#include "main.h"

/**
 * swap_int - swap value of int
 * @a: int
 * @b: int
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int c = *b;

	*b = *a;
	*a = c;
}
