#include<stdio.h>

/**
 * main - prints size of type
 * Description: printf strings displaying syze of types
 * Return: 0
 */

int main(void)
{
	printf("Size of a char: %zubyte(s)\n", sizeof(char));
	printf("Size of an int: %zubyte(s)\n", sizeof(int));
	printf("Size of a long int: %zubyte(s)\n", sizeof(long));
	printf("Size of a long long int: %zubyte(s)\n", sizeof(long long));
	printf("Size of a float: %zubyte(s)\n", sizeof(float));
	return (0);
}
