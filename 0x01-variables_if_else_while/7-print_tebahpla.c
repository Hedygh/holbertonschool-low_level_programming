#include<stdio.h>
/**
 * main - alphabet
 * Description: print reverse alphabet
 * Return: 0
 */
int main(void)
{
	char z = 'z';
	char a = 'a';

	while (z >= a)
	{
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
