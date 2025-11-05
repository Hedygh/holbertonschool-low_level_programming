#include "main.h"
#include<stdio.h>

/**
 * main - Entry
 * @ac: ac
 * @av: av
 * Return: 0
 */

int main(int ac, char **av)
{
	int i = 0;

	while (i < ac)
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}
