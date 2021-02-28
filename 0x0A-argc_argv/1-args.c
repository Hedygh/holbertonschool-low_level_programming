#include <stdio.h>
#include "holberton.h"
/**
 * main - print number of arguments
 * @ac: number of arg
 * @av: arguments
 * Return: Always 0
 */

int main(int ac, char **av)
{
	(void) av;
	int i = 0;

	if (ac >= 0)
	{
		while (i < ac - 1)
			i++;
	}
	printf("%d\n", i);
	return (0);
}
