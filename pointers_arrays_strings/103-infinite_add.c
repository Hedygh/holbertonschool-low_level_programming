#include "main.h"

/**
 * _strlen - lenght of string
 * @s: lenght
 *
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * infinite_add - n1 + n2 into r
 * @n1: first n
 * @n2: second n
 * @r: buffer
 * @size_r: buffer size
 * Return: result of addition
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = _strlen(n1), j = _strlen(n2);
	int a, b, sum, c = 0;
	int k;

	k = size_r - 2;
	if (size_r < 2) /* pas de place pour '\0' */
		return (0);
	r[size_r - 1] = '\0';
	i--;
	j--;

	/* colonne par colonne */
	while (i >= 0 || j >= 0 || c)
	{
		if (k < 0)
			return (0);
		if (i >= 0)
			a = n1[i] - '0';
		else
			a = 0;
		if (j >= 0)
			b = n2[j] - '0';
		else
			b = 0;
		sum = a + b + c;
		r[k] = (sum % 10) + '0';
		c = sum / 10;
		k--;
		i--;
		j--;
	}
	return (r + k + 1);
}

