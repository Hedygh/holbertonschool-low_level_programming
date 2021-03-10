#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
/**
 * main - calc result of arg op
 * @ac: number of arg
 * @av: arguments
 * Return: 0 if all went well or exit if error
 */
int main(int ac, char **av)
{
	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	int result;
	int i = atoi(av[1]);
	int j = atoi(av[3]);
	int (*res)(int, int);

	if ((j == 0) && (av[2][0] == '/' || av[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	if (av[2][0] != '%' && av[2][0] != '+' && av[2][0] != '/' &&
			av[2][0] != '-' && av[2][0] != '*')
	{
		printf("Error\n");
		exit(99);
	}
	res = get_op_func(av[2]);
	result = res(i, j);
	printf("%d\n", result);
	return (0);
}
