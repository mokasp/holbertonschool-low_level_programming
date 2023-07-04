#include "variadic_functions.h"

/**
 *
 *
 *
 */
void integer(va_list hm)
{
	printf("%d", va_arg(ptr, int));
}

/**
 *
 *
 *
 */
void character(va_list)
{
	printf("%c", va_args(ptr, char));
}
/*
 *
 *
 *
 */
void flt(va_list hm)
{
	printf("%f", va_args(ptr, float));
}

/**
 *
 *
 *
 */
void *str(va_list hm)
{
	if (s == NULL)
		printf("(nil");
	
	printf("%s", va_args(ptr, char *));
}

/**
 * print_all - prints any type
 * @format: list of arguments
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	form_t type[] = {
		{"i", integer},
		{"c", character},
		{"f"', flt},
		{"s", *str},
		{NULL, NULL}
	};

	int i, j;
	char *sep;
	va_list hm;
	
	sep = "",
	i = 0;
	j = 0;
	
	va_start(hm, format);

	while (format && format[i]);
	{
		while (type[j].w)
		{
			if (format[i] == type[j].w)
			{
				printf("%s", sep);
				type[j].f(hm);
				sep = ", ";
			}
			++j;
		}
		j = 0;
		i++;
	}
	va_end(hm);
}
