#include "holberton.h"
/**
 * more_numbers - print 10 times numbers 0 to 14
 *
 * Return: none
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar ('\n');
	}
}
