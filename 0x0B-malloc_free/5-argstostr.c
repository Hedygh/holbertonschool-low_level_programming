#include<stdio.h>
#include<stdlib.h>
#include "holberton.h"

/**
 * _strlen - lenght
 * @str: string
 * Return: lenght value
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}
/**
 * _strcat - append src to dest
 * @dest: base string
 * @src: string to append
 * Return: pointer to new dest string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\n';
	return (dest);
}

/**
 * argstostr - concatenate all args to one string
 * @ac: number of arg
 * @av: arguments
 * Return: pointer to the new string or 0 if fail
 */

char *argstostr(int ac, char **av)
{
	int i = 0;
	int lenght = 0;
	char *str;

	if (ac == 0 || av == 0)
		return (0);
	while (i < ac)
	{
		lenght += _strlen(av[i]);
		i++;
	}
	str = malloc(sizeof(char) * lenght + 1);
	if (!str)
		return (0);
	str[0] = '\0';
	i = 0;
	while (i < ac)
	{
		_strcat(str, av[i]);
		i++;
	}
	return (str);
}
