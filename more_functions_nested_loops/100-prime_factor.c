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
		while (m % i == 0) // tant que divisible par un facteur 
				   // on divise pour exclure le facteur (100/50/25%2==1)
		{
			m = m / i;
		}
	}
	printf("%ld\n", i);
	return (0);
}
