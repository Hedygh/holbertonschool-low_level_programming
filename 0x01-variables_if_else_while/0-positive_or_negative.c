#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - determine the number sign
 * Description: display the sign with strings
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
		printf("%d is zero\n", n);
	return (0);
}
