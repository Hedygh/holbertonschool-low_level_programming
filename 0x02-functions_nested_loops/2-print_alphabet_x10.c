#include<stdio.h>
/**
 * print_alphabet_x10 - print alphabet 10 times using nested loop
 *
 * Return void
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char a = 'a';

	while (i < 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a++);
		}
		_putchar('\n');
		i++;
	}
}
