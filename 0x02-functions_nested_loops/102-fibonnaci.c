#include <stdio.h>
/**
 * main - fibonacci series
 *
 * Return: always 0
 */
int main(void)
{
	int i = 0;
	long int a = 0;
	long int b = 1;
	long int c;

	while (i < 50)
	{
		c = a + b;
		printf("%ld", c);
		if (i < 49)
			printf(", ");
		a = b;
		b = c;
		i++;
	}
	printf("\n");
	return (0);
}
