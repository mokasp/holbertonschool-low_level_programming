#include "variadic_functions.h"

/**
 * sum_them_all - adds together all parameters
 * @n: number of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;

	va_list ptr;
	va_start(ptr, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ptr, unsigned int);
	va_end(ptr);
	return (sum);
}
