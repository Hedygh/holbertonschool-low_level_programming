#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct type - truct for different type
 *
 * @s: string of type
 * @f: function pointer
 */
typedef struct type
{
	char *s;
	void (*f)(va_list ap);
} ty;
#endif
