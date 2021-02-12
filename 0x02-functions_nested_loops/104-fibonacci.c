#include <stdio.h>
/**
 * main - fibonacci series till 98
 *
 * Return: always 0
 */
int main(void)
{
	int i = 0;
	unsigned long int a = 0;
	unsigned long int b = 1;
	unsigned long int c = 0;
	unsigned long int k = 0;
	unsigned long int l = 0;

	while (i < 98)
	{
		c = a + b;
		if (i <= 50)
		{
			printf("%lu", c);
			if (i <= 50)
				printf(", ");
		}
		a = b;
		b = c;
		if (i > 50)
		{
			k = c / 1000000;
			l = c % 1000000;
			printf("%lu", k);
			printf("%lu", l);
			if (i < 97)
				printf(", ");
		}
		i++;
	}
	printf("\n");
	return (0);
}

