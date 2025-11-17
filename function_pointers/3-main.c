#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * @ac: ac
 * @av: av
 * Return: void
 */

int main(int ac, char **av)
{
	int (*op)(int, int);
	int i, j, res;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = get_op_func(av[2]);
	if (op == NULL || av[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	i = atoi(av[1]);
	j = atoi(av[3]);
	res = op(i, j);
	printf("%d\n", res);
	return (0);
}
