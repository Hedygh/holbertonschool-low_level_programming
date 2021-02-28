#include <stdio.h>
/**
 * main - prints the program name (av 0)
 * @ac: number of arg
 * @av: arguments
 * Return: always 0
 */
int main(int ac, char **av)
{
	(void) ac;

	printf("%s\n", av[0]);
	return (0);
}
