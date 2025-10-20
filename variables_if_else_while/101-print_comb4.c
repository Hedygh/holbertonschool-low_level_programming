#include <stdio.h>

/**
 * main - Entry
 * Description: Print all combinations of 3 digits
 * Return: 0
 */
int main(void)
{
	int i = '0';
	int j;
	int k;

	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
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
	}
	putchar('\n');
	return (0);
}
