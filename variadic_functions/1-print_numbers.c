#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print n integers in between separators
 * @separator: sep
 * @n: numbers of int
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);

	while (i < n)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
}
