#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_c - print arg
 * @ap: list of arg
 * Return : None
 */

void print_c(va_list ap)
{
	printf("%c", va_arg(ap, int));
}
/**
 * print_i - print arg
 * @ap: list of arg
 * Return : None
 */
void print_i(va_list ap)
{
	printf("%d", va_arg(ap, int));
}
/**
 * print_f - print arg
 * @ap: list of arg
 * Return : None
 */

void print_f(va_list ap)
{
	printf("%f", va_arg(ap, double));
}
/**
 * print_s - print arg
 * @ap: list of arg
 * Return : None
 */
void print_s(va_list ap)
{
	char *str = va_arg(ap, char*);

	if (!str)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
/**
 * print_all - print all types of arg
 * @format: strings referencing type format
 * Return: none
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i;
	int j;
	char *str = "";
	ty t[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
	};
	i = 0;
	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == t[j].s[0])
			{
				printf("%s", str);
				str = ", ";
				t[j].f(ap);
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
