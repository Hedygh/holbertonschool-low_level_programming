#include <stdio.h>

/**
 * main - Entry
 * Description: Print all combinations of 2 digits
 * Return: 0
 */
int main(void)
{
	int i = '0';
	int j = '1';

	while (i <= '8')
	{
		while (j <= '9')
		{
			putchar(i);
			putchar(j);
			if (i < '8')
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	putchar('\n');
	return (0);
}
