#include "main.h"

/**
 * rot13 - encode using rot13
 * @s: string to encode
 *
 * Return: encoded string
 */

char *rot13(char *s)
{
	int i = 0;

	while (s[i])
	{
		while ((s[i] >= 97 && s[i] <= 109) ||
				(s[i] >= 65 && s[i] <= 77))
		{
			s[i] += 13;
			i++;
		}
		if ((s[i] >= 110 && s[i] <= 122) ||
				(s[i] >= 78 && s[i] <= 90))
			s[i] -= 13;
		i++;
	}
	return (s);
}
