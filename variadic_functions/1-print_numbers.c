#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list argum;

	va_start(argum, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(argum, int));
		if ((i < n - 1) && (separator != NULL))
			printf("%s", separator);
	}
	va_end(argum);

	printf("\n");
}
