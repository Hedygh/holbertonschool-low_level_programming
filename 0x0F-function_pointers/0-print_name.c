#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - print name by calling function pointer
 * @name: name to print
 * @f: pointer to function
 * Return: None
 */
void print_name(char *name, void(*f)(char *))
{
	(*f)(name);
}
