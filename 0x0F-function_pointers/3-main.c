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
	int (*res)(int, int);
	int i, j, c;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((av[3][0] == '0') && (av[2][0] == '/' || av[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	if (strlen(av[2]) > 1)
	{
		printf("Error\n");
		exit(99);
	}
	c = av[2][0];
	switch (c)
	{
		case '+':
		case '-':
		case '/':
		case '*':
		case '%':
			break;
		default:
			printf("Error\n");
			exit(99);
	}
	j = atoi(av[3]);
	i = atoi(av[1]);
	res = get_op_func(av[2]);
	printf("%d\n", res(i, j);
	return (0);
}
