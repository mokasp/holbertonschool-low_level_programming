#include "variadic_functions.h"

/**
 * print_strings - prints whole stings
 * @n: number of strings
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x, i;
	va_list ptr;

	va_start(ptr, n);

	if (separator == NULL)
		separator = "";
	if (n == 0)
		;
	for (i = 0; i < n; i++)
	{
		x = va_arg(ptr, char);
		if (i < n - 1)
			printf("%s%s", x, separator);
		else
			printf("%s\n", x);
	}
	va_end(ptr);
}
