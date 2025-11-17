#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name
 * @name: name to print
 * @f: function that print
 * Return: none
 */

void print_name(char *name, void (*f)(char *))
{
	if ((!name) || (!f))
		return;
	f(name);
}
