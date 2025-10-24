#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>
/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long int x = 0;
	long int j = 1;
	long int res;

	while (i < 98)
	{
		res = x + j;
		printf("%ld", res);
		if (i < 98)
		{
			putchar(',');
			putchar(' ');
		}
		x = j;
		j = res;
		i++;
	}
	putchar('\n');
	return (0);
}
