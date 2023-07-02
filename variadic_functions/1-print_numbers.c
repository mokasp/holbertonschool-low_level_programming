#include "variadic_functions.h"

/**
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	unsigned int i;
	va_list ptr;
	
	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(ptr, unsigned int);
		printf("x: %d\n", x);
	}
	va_end(ptr);
}
