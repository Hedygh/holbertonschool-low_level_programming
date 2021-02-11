#include <stdio.h>

/**
 * main - find and print the largest prime factor of number
 *
 * Return: always 0
 */

int main(void)
{
	int c = 2;
	long int num = 612852475143;

	while (num > 1)
	{
		while (num % c == 0)
		{
			num = num / c;
		}
		c++;
	}
	printf("%d\n", c);
	return (0);
}
