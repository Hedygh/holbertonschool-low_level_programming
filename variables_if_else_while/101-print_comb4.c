#include <stdio.h>

/**
 * main - Entry
 * Description: Print all combinations of 3 digits
 * Return: 0
 */
int main(void)
{
	int i = '0';
	int j = '1';
	int k = '2';

	while (i <= '7')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i < '7')
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
		j = i + 1;
		k = j + 1;
	}
	putchar('\n');
	return (0);
}
