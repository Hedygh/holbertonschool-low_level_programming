#include "main.h"
#include<stdio.h>

/**
 * main - Entry
 * @ac: ac
 * @av: av
 * Return: 0
 */

int main(int ac, char **av)
{
	int i = ac - 1;
	(void)av;

	printf("%d\n", i);
	return (0);
}
