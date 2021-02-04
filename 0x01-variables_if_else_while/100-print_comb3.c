#include <stdio.h>
/**
 * main - alphabet
 * Description: print digit comb 01 to 89
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int j = 1;

	while (i <= 8)
	{
		while (j <= 9)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (!(i == 8 && j == 9))
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i = i + 1;
		j = i + 1;
	}
	return (0);
}
