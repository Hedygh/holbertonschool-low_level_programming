#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum of all argument from variadic function
 * @n: number of arg
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);
	while (i < n)
	{
		sum += (va_arg(ap, int));
		i++;
	}
	va_end(ap);
	return (sum);
}
