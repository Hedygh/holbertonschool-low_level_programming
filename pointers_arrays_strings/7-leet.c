#include "main.h"

/**
 * leet - encode 1337
 * @s: string to encode
 * Return: encoded string
 */

char *leet(char *s)
{
	int i = 0;
	int j;

	char l[] = "aAeEoOtTlL";
	char n[] = "4433007711";

	while (s[i])
	{
		j = 0;
		while (l[j] && n[j])
		{
			if (s[i] == l[j])
				s[i] = n[j];
			j++;
		}
		i++;
	}
	return (s);
}
