#include <stdio.h>

/**
 * main - alphabet
 * Description: print alphabet without e and q
 * Return: 0
 */
int main(void)
{
	char a = 'a';
	char z = 'z';

	while (a <= z)
	{
		if (a != 'q' && a != 'e')
			putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
