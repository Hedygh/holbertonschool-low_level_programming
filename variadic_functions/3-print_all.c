#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_char - print char
 * @ap: ptr to list
 * Return: void
 */
void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_int - print int
 * @ap: ptr to list
 * Return: void
 */
void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - print float
 * @ap: ptr to list
 * Return: void
 */
void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - print string
 * @ap: ptr
 * Return: void
 */
void print_string(va_list ap)
{
	char *s = va_arg(ap, char*);

	if (!s)
	{
		printf("(nil)");
		return;
	}
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
	int i, j;
	va_list ap;
	char *sep = "";

	ty_f array[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
	};
	i = 0;
	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == array[j].s[0])
			{
				printf("%s", sep);
				sep = ", ";
				array[j].f(ap);
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
