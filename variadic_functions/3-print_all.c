#include "variadic_functions.h"

/**
 *
 *
 *
 */
void integer(va_list hm)
{
	int integer = va_arg(hm, int);
	printf("%d", integer);
}

/**
 *
 *
 *
 */
void character(va_list hm)
{
	char character = va_arg(hm, int);
	printf("%c", character);
}
/*
 *
 *
 *
 */
void flt(va_list hm)
{
	double flt = va_arg(hm, double);

	printf("%f", flt);
}

/**
 *
 *
 *
 */
void string(va_list hm)
{
	char *str = va_arg(hm, char *);

	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}

/**
 * print_all - prints any type
 * @format: list of arguments
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list hm;
	form_t type[] = {
		{ "i", integer },
		{ "c", character },
		{ "f", flt },
		{ "s", string },
	};

	int i, j;
	char *sep;
	
	sep = "",
	i = 0;
	j = 0;
	
	va_start(hm, format);

	while (format != NULL && format[i])
	{
		while (type[j].w)
		{
			if (format[i] == *type[j].w)
			{
				printf("%s", sep);
				type[j].f(hm);
				sep = ", ";
			}
			++j;
		}
		j = 0;
		++i;
	}
	printf("\n");
	va_end(hm);
}
