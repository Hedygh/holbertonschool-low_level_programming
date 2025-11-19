#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct type_finder - find type to right function
 *
 * @s: string
 * @f: fptr
 */
typedef struct type_finder
{
	char *s;
	void (*f)(va_list ap);
} ty_f;
#endif
