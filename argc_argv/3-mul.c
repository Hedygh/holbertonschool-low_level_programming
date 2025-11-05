#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry
 * @ac: ac
 * @av: av
 * Return: 0
 */

int main(int ac, char **av)
{
	int sum = 0;

	if (ac < 2)
	{
		printf("Error\n");
		return (1);
	}
	sum = atoi(av[1]) * atoi(av[2]);
	printf("%d\n", sum);
	return (0);
}
