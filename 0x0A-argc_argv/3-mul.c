#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the result of two numbers multiplication
 * @ac: number of arg
 * @av: arguments
 * Return: always 0
 */
int main(int ac, char **av)
{
	int res = 0;

	if (ac == 3)
	{
		res = atoi(av[1]) * atoi(av[2]);
		printf("%d\n", res);
	}
	else
		printf("Error\n");
	return (0);
}
