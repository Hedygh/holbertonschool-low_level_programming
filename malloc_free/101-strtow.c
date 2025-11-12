#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strndup - duplicate string n chars
 * @str: string
 * @n: n char to dup
 * Return: allocated string
 */

char *_strndup(char *str, int n)
{
	int i = 0;
	char *dest;

	dest = malloc(n + 1);
	if (!dest)
		return (0);
	i = 0;
	while (str[i] && i < n)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _cw - count words
 * @str: string to check
 * Return: words count
 */

int _cw(char *str)
{
	int i = 0;
	int s = 0;

	while (str[i])
	{
		while (str[i] == ' ')
			i++;
		if (!str[i])
			break;
		s++;
		while (str[i] && str[i] != ' ')
			i++;
	}
	return (s);
}

/**
 * _chsp - check for spaces
 * @str: string to check
 * @n: char location
 * Return: 1 or 0
 */

int _chsp(char *str, int n)
{
	if (str[n] == ' ')
		return (0);
	return (1);
}

/**
 * strtow - split string into array
 * @str: string
 * Return: array
 */

char **strtow(char *str)
{
	char **dest;
	int i = 0;
	int j = 0;
	int num;
	int cw;

	if (!str)
		return (0);

	cw = _cw(str);
	if (cw == 0)
		return (0);

	dest = malloc(sizeof(char *) * (cw + 1));
	if (!dest)
		return (0);

	while (i < cw)
	{
		num = 0;
		while (str[j] && _chsp(str, j) == 0)
			j++;
		while (str[j + num] && _chsp(str, j + num) == 1)
			num++;
		dest[i] = _strndup(&str[j], num);
		j += num;
		i++;
	}
	dest[i] = NULL;
	return (dest);
}
