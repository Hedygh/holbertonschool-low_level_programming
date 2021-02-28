#include <stdio.h>
#include "holberton.h"
/**
 * main - print number of arguments
 * @ac: number of arg
 * @av: arguments
 * Return: Always 0
 */

int main(int ac, char **av)
{
	(void) av;

	printf("%d\n", ac - 1);
	return (0);
}
