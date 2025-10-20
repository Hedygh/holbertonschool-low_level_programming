#include <stdio.h>

/**
 * main - Entry
 * Description: print alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
		putchar(c--);
	putchar('\n');
	return (0);
}
