#include "variadic_functions.h"

/**
 * print_strings - prints whole stings
 * @separator: string in between the strings
 * @n: number of strings
 * testing the waters
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
	if (n == 0)
		printf("\n");

	for (i = 0; i < n; i++)
	{
		x = va_arg(ptr, char *);
		if (x == NULL)
			x = "(nil)";
		if (i < n - 1)
			printf("%s%s", x, separator);
		else
			printf("%s\n", x);
	}
	va_end(ptr);
}
