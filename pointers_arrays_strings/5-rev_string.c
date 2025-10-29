#include "main.h"

/**
 * rev_string - reverse string
 * @s: string to rev
 * Return: none
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char tmp;

	while (s[j])
		j++;
	j = j - 1;
	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
	_putchar(10);
}
