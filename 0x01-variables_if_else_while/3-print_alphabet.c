#include <stdio.h>
/**
 * main - alphabet
 * Return : 0
 */

int main(void)
{
	char a = 'a';
	char z = 'z';
	char A = 'A';
	char Z = 'Z';

	while (a <= z)
		putchar(a++);
	while (A <= Z)
		putchar(A++);
	putchar('\n');
	return (0);
}
