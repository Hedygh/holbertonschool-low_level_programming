#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stddef.h>
/**
 * print_strings - prints strings arg with separator
 * @separator: separators to prints between strings
 * @n: number of strings
 * Return: None
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *str;

	va_start(ap, n);

	while (i < n)
	{
		str = va_arg(ap, char*);
		if (str == "NULL")
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != 0 && i < n - 1)
			printf("%s", separator);
		i++;
	}
	va_end(ap);
	printf("\n");
}
