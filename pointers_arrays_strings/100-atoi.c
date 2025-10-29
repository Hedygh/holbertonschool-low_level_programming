#include<stdio.h>
#include "main.h"
/**
 * _atoi - mimic atoi
 * @s: string to check
 * Return: number found
 */

int _atoi(char *s)
{
	int i = 0;
	int sn = 1;
	unsigned int m = 0;

	while (s[i] >= 9 && s[i] <= 13)
		i++;
	while ((s[i] >= 58 && s[i] <= 126) || (s[i] >= 32 && s[i] <= 47))
	{
		if (s[i] == '-' || s[i] == '+')
			if (s[i] == '-')
				sn = -sn;
		i++;
	}
	if (!(s[i] >= '0' && s[i] <= '9'))
		return (0);
	while (s[i] >= '0' && s[i] <= '9')
	{
		m = m * 10 + s[i] - '0';
		i++;
	}
	return (m * sn);
}
