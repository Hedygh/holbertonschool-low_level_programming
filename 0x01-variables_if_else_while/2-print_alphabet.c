#include <stdio.h>

/**
 * main - using putchar
 * Description: looping through putchar to print alphabet
 * Return: 0
 */
int main(void)
{
	char a = 'a';
	char z = 'z';

	while (a <= z)
		putchar(a++);
	putchar('\n');
	return (0);
}
