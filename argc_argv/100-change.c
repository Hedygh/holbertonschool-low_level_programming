#include<stdio.h>
#include<stdlib.h>

/**
 * main - entry
 * @ac: ac
 * @av: av
 * Return: 0
 */

int main(int ac, char **av)
{
	int res = 0;
	int i = 0;

	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(av[1]) <= 0)
	{
		printf("0\n");
		return (0);
	}
	res = atoi(av[1]);
	if (res >= 25)
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
		i += 1;
	printf("%d\n", i);
	return (0);
}
