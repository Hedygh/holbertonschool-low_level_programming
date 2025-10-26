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
	const unsigned long m = 1000000000UL;
	unsigned long a = 0;
	unsigned long x = 0;
	unsigned long b = 0;
	unsigned long j = 1;
	unsigned long c;
	unsigned long res;

	while (i < 98)
	{
		res = x + j;
		c = a + b;
		if (res >= m)
		{
			res -= m;
			c += 1;
		}
		if (c == 0)
			printf("%lu", res);
		else
			printf("%lu%09lu", c, res);
		if (i != 97)
		{
			putchar(',');
			putchar(' ');
		}
		a = b;
		x = j;
		b = c;
		j = res;
		i++;
	}
	putchar('\n');
	return (0);
}
