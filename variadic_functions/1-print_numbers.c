#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: string between numbers
 * @n: number of arguments
 *
 * Return: void
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
		if (i < n - 1)
			printf("%d%s", x, separator);
		else
			printf("%d\n", x);
	}
	va_end(ptr);
}
