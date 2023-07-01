#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - print name using function pointers
 * @name: name to print
 * @f: function to print the name
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
