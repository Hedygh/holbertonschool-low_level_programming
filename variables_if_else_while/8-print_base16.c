#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry
 * Description: print all hexa numbers
 * Return: 0
 */
int main(void)
{
	int i = '0';
	int j = 0x61;

	while (i <= '9')
		putchar(i++);
	while (j <= 0x66)
	{
		putchar(j);
			j++;
	}
	putchar('\n');
	return (0);
}
