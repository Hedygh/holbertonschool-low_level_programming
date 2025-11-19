#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print n strings in between separators
 * @separator: sep
 * @n: numbers of strings
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;
	char *s;

	va_start(ap, n);

	while (i < n)
	{
		s = va_arg(ap, char *);
		if (s == NULL)
			printf("(nil)");
		printf("%s", s);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
	va_end(ap);
	printf("\n");
}
