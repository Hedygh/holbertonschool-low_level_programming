#include "holberton.h"
/**
 * rev_string - reverse a string
 * @s: string to reverse
 *
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
}
