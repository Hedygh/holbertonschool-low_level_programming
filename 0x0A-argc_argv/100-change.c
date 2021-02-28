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
	int i;

		i = 0;

	if (res > 25)
	{
		i = res / 25;
		res = res % 25;
	}
	if (res >= 10)
	{
		i += res / 10;
		res = res % 10;
	}
	if (res >= 5)
	{
		i += res / 5;
		res = res % 5;
	}
	if (res >= 2)
	{
		i += res / 2;
		res = res % 2;
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
	int res;

	if (ac < 2)
	{
		printf("Error\n");
			return (1);
	}
	if (av[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}
	res = atoi(av[1]);
	printf("%d\n", change_cents(res));
	return (0);
}
