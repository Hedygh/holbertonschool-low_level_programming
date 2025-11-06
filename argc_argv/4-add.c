#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

/**
 * main - Entry
 * @ac: ac
 * @av: av
 * Return: 0
 */

int main(int ac, char **av)
{
	int i = 1;
	int j = 0;
	int sum = 0;

	if (ac < 3)
	{
		printf("0\n");
		return (0);
	}
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (isdigit(av[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(av[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
