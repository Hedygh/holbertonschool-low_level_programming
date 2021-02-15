#include "holberton.h"
/**
 * _atoi - convert string to integer
 * @s: string to convert
 * Return: int value
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int res = 0;

	while ((s[i] >= 32 && s[i] <= 47) || (s[i] >= 58 && s[i] <= 126))
	{
		if ((s[i] == '-') || (s[i] == '+'))
		{
			if (s[i] == '-')
				sign = sign * -1;
		}
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + s[i] - '0';
		i++;
	}
	return (res * sign);
}
