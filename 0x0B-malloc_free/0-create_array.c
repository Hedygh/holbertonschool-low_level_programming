#include<stdio.h>
#include "holberton.h"
#include<stdlib.h>

/**
 * create_array - create an array of char
 * @size : size of array
 * @c: char to use
 * Return: Null if size is 0 or if fails to create
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	if (size == 0)
	return (0);

	str = malloc(sizeof(char) * size);
	if (!str)
		return (0);

	while (i < size)
	{
	str[i] = c;
	i++;
	}
	return (str);
}
