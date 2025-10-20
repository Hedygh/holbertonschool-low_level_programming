#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%s", "The number is positive\n");
	if (n == 0)
		printf("%s", "The number is zero\n");
	if (n < 0)
		printf("%s", "The number is negative\n");
	return (0);
}
