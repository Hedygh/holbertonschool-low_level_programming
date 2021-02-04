#include <stdio.h>
/**
 * main - alphabet
 * Description: print
 * Return: 0
 */
int main(void)
{
	char a = '0';

	while (a <= '9')
	{
		putchar(a);
		if (a < '9')
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
