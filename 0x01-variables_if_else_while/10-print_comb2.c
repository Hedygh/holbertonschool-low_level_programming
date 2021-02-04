#include <stdio.h>
/**
 * main - alphabet
 * Description: print combo numbers
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int j = 0;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (!(i == 9 && j == 9))
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
