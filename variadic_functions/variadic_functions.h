#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

/**
 * struct specifier - allocates a specifier and a funciton pointer
 * @c: specifier
 * @func: function pointer
 */

typedef struct specifier
{
	char c;
	int (*func)(va_list args);
} spec;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int print_char(va_list args);
int print_float(va_list args);
int print_str(va_list args);
int print_num(va_list args);

#endif
