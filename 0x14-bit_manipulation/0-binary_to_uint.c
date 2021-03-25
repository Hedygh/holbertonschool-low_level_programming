#include "list.h"
/**
 * binary_to_uint - convert binary string to uint
 * @b: string binary
 * Return: the result
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int i = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	i = 0;
	while (b[i] == '0' || b[i] == '1')
	{
		res <<= 1;
		res += b[i] - '0';
		i++;
	}
	return (res);
}
