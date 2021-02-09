#include "holberton.h"
/**
 * main - putchar Holberton
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "Holberton";
	int i = 0;

	while (str[i])
	{
		_putchar(str[i++]);
	}
	_putchar('\n');
	return (0);
}
