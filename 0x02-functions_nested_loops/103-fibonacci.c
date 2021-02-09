#include <stdio.h>
/**
 * main - fibonacci series
 *
 * Return: always 0
 */
int main(void)
{
	long int a = 0;
	long int b = 1;
	long int c = 0;
	long int sum = 0;

	while (c < 4000000)
	{
		c = a + b;
		if ((c % 2) == 0)
			sum = sum + c;
		a = b;
		b = c;
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
