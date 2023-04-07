#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - Prints a char
 * @args: char to print
 * Return: 0
 */

int print_char(va_list args)
{
	char c = va_arg(args, int);

	printf("%c", c);
	return (0);
}

/**
 * print_float - Prints a float
 * @args: float to print
 * Return: 0
 */

int print_float(va_list args)
{
	float f = va_arg(args, int);

	printf("%f", f);
	return (0);
}

/**
 * print_str - Prints a string
 * @args: string to print
 * Return: 0
 */

int print_str(va_list args)
{
	char *st = va_arg(args, char *);

	if (st == NULL)
	{
		printf("(nil)");
		return (-1);
	}
	printf("%s", st);
	return (0);
}

/**
 * print_num - Prints an int
 * @args: int to print
 * Return: 0
 */

int print_num(va_list args)
{
	int i = va_arg(args, int);

	printf("%i", i);
	return (0);
}

/**
* print_all - function that prints numbers, followed by a new line
* @format: a list of arguments passed to the function
* Return: Always 0.
*/

void print_all(const char * const format, ...)
{
	spec specifier[] = {
		{'c', print_char},
		{'i', print_num},
		{'f', print_float},
		{'s', print_str},
		{'\0', NULL},
	};

	int i = 0, j;
	va_list args;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (format[i] != specifier[j].c && specifier[j].c != '\0')
			j++;
		if (specifier[j].c != '\0')
		{
			printf("%s", separator);
			specifier[j].func(args);
			separator = ", ";
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
