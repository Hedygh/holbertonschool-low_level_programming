#include "holberton.h"
/**
 * binary_to_uint - convert binary string to uint
 * @b: string binary
 * Return: the result
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	unsigned int i = 0;

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		res <<= 1;
		res += b[i] - '0';
		i++;
	}
	return (res);
}
