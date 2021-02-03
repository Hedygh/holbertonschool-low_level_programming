#include<unistd.h>

/**
 * main - print string to stderr using fprintf
 * Description: Using fprintf specifying the destination to stderr
 * Return: 1
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
	return (1);
}
