#include "lists.h"

/**
 * _strlen - lgt of s
 * @str: s
 * Return: len
 */
int _strlen(const char *str)
{
	int i = 0;

	while(str[i])
		i++;
	return (i);
}
