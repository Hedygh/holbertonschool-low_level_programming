#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - result of addition
 * @a: int for ope
 * @b: int for ope
 * Return: result
 */
int op_add(int a, int b)
{
	int res = a + b;

	return (res);
}
/**
 * op_sub - result of substraction
 * @a: int for ope
 * @b: int for ope
 * Return: result
 */
int op_sub(int a, int b)
{
	int res = a - b;

	return (res);
}
/**
 * op_mul - result of multiplication
 * @a: int for ope
 * @b: int for ope
 * Return: result
 */
int op_mul(int a, int b)
{
	int res = a * b;

	return (res);
}
/**
 * op_div - result of division
 * @a: int for ope
 * @b: int for ope
 * Return: result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - result of modulo
 * @a: int for ope
 * @b: int for ope
 * Return: result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
