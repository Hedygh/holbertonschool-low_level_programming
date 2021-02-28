#include <stdio.h>
/**
 * main - print all arguments
 * @ac: number of arg
 * @av: arguments
 * Return: always 0
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
