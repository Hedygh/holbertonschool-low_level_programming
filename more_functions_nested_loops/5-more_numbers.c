#include "main.h"

/**
 * more_numbers - print 0 to 14
 *
 * Return: none
 */
void more_numbers(void)
{
	int i;
	int n = 0;

	while (n <= 9)
	{
		i = 0;
		while (i <= 14)
		{
			if (i > 9)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			i++;
		}
		_putchar('\n');
		n++;
	}
}
