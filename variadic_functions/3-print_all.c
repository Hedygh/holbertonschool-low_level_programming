#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_char - c
 * @ap: ptr to list
 * Return: void
 */
void print_char(va_list *ap)
{
	printf("%c", va_arg(*ap, int));
}

/**
 * print_int - int
 * @ap: ptr to list
 * Return: void
 */
void print_int(va_list *ap)
{
	printf("%d", va_arg(*ap, int));
}

/**
 * print_float - f
 * @ap: ptr to list
 * Return: void
 */
void print_float(va_list *ap)
{
	printf("%f", va_arg(*ap, double));
}

/**
 * print_string - s
 * @ap: ptr
 * Return: void
 */
void print_string(va_list *ap)
{
	char *s = va_arg(*ap, char *);

	if (!s)
		printf("(nil)");
	else
		printf("%s", s);
}
/**
 * print_all - print all types of args
 * @format: list of types
 *
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	int j = 0;
	va_list ap;
	char *sep = "";

	ty_f array[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_start(ap, format);

	while (format[i] && format)
	{
		j = 0;
		while (array[j].s)
		{
			if (format[i] == array[j].s[0])
			{
				printf("%s", sep);
				array[j].f(&ap);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
