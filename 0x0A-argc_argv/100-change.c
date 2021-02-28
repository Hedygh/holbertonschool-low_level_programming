#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * change_cents - count how many coins for number
 * @res: number to count in
 * Return: number of coins found
 */
int change_cents(int res)
{
	int i = 1, j = 0;

	if (res > 25)
	{
		i = res / 25;
		j = res % 25;
		res = j;
	}
	if (res >= 10)
	{
		i = i + j / 10;
		j = res % 10;
		res = j;
	}
	if (res >= 5)
	{
		i = i + j / 5;
		j = res % 5;
		res = j;
	}
	if (res >= 2)
	{
		i = i + j / 2;
		j = res % 2;
		res = j;
	}
	if (res == 1)
		i++;
	return (i);
}
/**
 * main - check for error and call change_cents
 * @ac: number of arg
 * @av: arguments
 *
 * Return: 1 for error else 0
 */
int main(int ac, char **av)
{
	int i = 1, j = 0, res;

	if (ac < 2)
	{
		printf("Error\n");
			return (1);
	}
	if (av[1][j] == '-')
	{
		printf("0\n");
		return (0);
	}
	res = atoi(av[1]);
	printf("%d\n", change_cents(res));
	return (0);
}
