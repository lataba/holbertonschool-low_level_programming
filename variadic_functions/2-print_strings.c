#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints numbers, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	const char *str;
	unsigned int i;
	va_list argum;

	va_start(argum, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(argum, const char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(argum);
	printf("\n");
}
