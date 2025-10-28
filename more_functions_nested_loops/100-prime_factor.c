#include<stdio.h>

/**
 * main - entry
 * Description: find largest prime factor
 * Return: 0
 */
int main(void)
{
	long int i = 1;
	long int m = 612852475143;

	while (m > 1)
	{
		i++;
		while (m % i == 0)
		{
			m = m / i;
		}
	}
	printf("%ld", i);
	return (0);
}
