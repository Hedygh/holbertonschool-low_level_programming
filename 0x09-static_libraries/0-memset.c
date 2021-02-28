#include "holberton.h"
/**
 * _memset - fills n bytes of s with byte b
 * @s: pointer to memory area
 * @b: bytes to fill in
 * @n: size of the adress
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
