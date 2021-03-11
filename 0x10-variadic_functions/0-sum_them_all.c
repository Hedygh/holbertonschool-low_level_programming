#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum of all arguments
 * @n: number of arg
 * Return: result or 0 if no arg
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	int res = 0;

	va_start(ap, n);
	if (n == 0)
		return (0);

	while (i < n)
	{
		res += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (res);
}
