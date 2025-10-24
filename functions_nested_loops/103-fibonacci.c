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
	long int x = 0;
	long int j = 1;
	long int res = 0;
	long int sum;

	while (res < 4000000)
	{
		res = x + j;
		if (res % 2 == 0)
		{
			sum = sum + res;
		}
		x = j;
		j = res;
	}
	printf("%ld", sum);
	putchar('\n');
	return (0);
}
