#include "variadic_functions.h"

/**
 * sum_them_all - adds together all parameters
 * @n: number of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;

	va_list ptr;
	va_start(ptr, n);
	for (unsigned int i = 0; i < n; i++)
		sum += var_arg(ptr, unsigned int);
	va_end(ptr);
	return (sum);
}
