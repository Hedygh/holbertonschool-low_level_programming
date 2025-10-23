#include "main.h"
/**
 * jack_bauer - minutes of day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int i = 0;
	int j;

	while (i <= 23)
	{
		j = 0;
		while (j <= 59)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}
