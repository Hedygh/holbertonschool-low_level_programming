#include <stdio.h>
/**
 * main - Entry
 *
 * Return: 0
 */

int main(void)
{
	char c = '0';

	while (c <= '9')
		putchar(c++);
	putchar('\n');
	return (0);
}
