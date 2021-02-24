#include "holberton.h"
/**
 * checkprime - find out if the number is prime
 * @n: num to check
 * @i: index 2 to start with
 * Description: search i untill sqrt of n
 * Return: 1 if prime else 0
 */
int checkprime(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (checkprime(n, i + 1));
}
/**
 * is_prime_number - find out if the number is prime
 * @n: num to check
 * Return: 1 if prime else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (checkprime(n, 2));
}
