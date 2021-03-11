#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - print numbers from arguments
 * @separator: string between numbers
 * @n: number of int arg
 * Return: None
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	va_start(ap, n);
	while (i < n)
	{
		printf("%d", va_arg(ap, int));
		if (separator != 0 && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
}
