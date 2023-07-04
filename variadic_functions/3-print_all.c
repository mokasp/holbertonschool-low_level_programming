#include "variadic_functions.h"

/**
 *
 *
 *
 */
void integer(va_list hm)
{
	printf("%d", va_arg(hm, int));
}

/**
 *
 *
 *
 */
void character(va_list hm)
{
	printf("%c", va_arg(hm, char));
}
/*
 *
 *
 *
 */
void flt(va_list hm)
{
	printf("%f", va_arg(hm, float));
}

/**
 *
 *
 *
 */
void string(va_list hm)
{
	str = va_arg(hm, char *)

	if (str == NULL)
		printf("(nil");

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
		{ NULL, NULL }
	};

	int i, j;
	char *sep;
	
	sep = "",
	i = 0;
	j = 0;
	
	va_start(hm, format);

	while (format != NULL && format[i]);
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
	va_end(hm);
}
