#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
 * _strcat - concatenate 2 strings
 * @dest: string that receive
 * @src: source string
 * Return: pointer to new string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/**
 * argstostr - concat strings passed to program
 * @ac: ac
 * @av: av
 * Return: new string
 */

char *argstostr(int ac, char **av)
{
	int i = 0;
	int lgt = 0;
	char *dest;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		if (av[i] != NULL)
			lgt += _strlen(av[i]) + 1;
		i++;
	}
	lgt += 1;
	dest = malloc(sizeof(char) * lgt);
	dest[0] = '\0';

	if (!dest)
		return (0);
	i = 0;
	while (i < ac)
	{
		if (av[i] != NULL)
			_strcat(dest, av[i]);
		_strcat(dest, "\n");
		i++;
	}
	return (dest);
}
