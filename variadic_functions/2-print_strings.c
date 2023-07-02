#include "variadic_functions.h"

/**
 * print_strings - prints whole stings
 * @n: number of strings
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;
	va_list ptr;

	va_start(ptr, n);

	if (separator == NULL)
		separator = "";
	
	for (i = 0; i < n; i++)
	{
		x = va_arg(ptr, char);
		if (x == NULL)
			x = "(nil)";
		if (i < n - 1)
			printf("%s%s", x, separator);
		else
			printf("%s\n", x);
	}
	va_end(ptr);
}
