#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _isdigit - check if char is digit
 * @c: char to check
 * Return: 1 if digit else 0
 */
int _isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/**
 * main - add positives numbers passed in arguments
 * @ac: number of arg
 * @av: arguments
 * Return: 1 if no digits found else 0
 */
int main(int ac, char **av)
{
	int i = 1;
	int j = 0;
	int res = 0;

	if (ac > 1)
	{
		while (i < ac)
		{
			while (av[i][j])
			{
				if (_isdigit(av[i][j]) == 0)
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			res = res + atoi(av[i]);
			i++;
		}
		printf("%d\n", res);
	}
	else
		printf("0\n");
	return (0);
}
