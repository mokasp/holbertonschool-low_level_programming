#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct type - Struct type
 *
 * @type: the type
 * @f: the function associated
 */

typedef struct types
{
	char *w;
	char(*f)(va_list hm);
} form_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
void integer(va_list hm);
void character(va_list hm);
void flt(va_list hm);
void *str(va_list hm);

#endif
