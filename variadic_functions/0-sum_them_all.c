#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameters
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)

{
	int suma = 0;
	va_list argum;

	if (n == 0)
		return (0);

	va_start(argum, n);

	for (int i = 0; i < n; i++)
		suma = suma + va_arg(argum, int);
}
