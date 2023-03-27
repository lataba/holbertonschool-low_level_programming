#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints numbers, followed by a new line
 * @format: a list of types of arguments passed to the function
 * Return: Always 0.
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char c;
	int integer;
	float f;
	char *s;
	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				integer = va_arg(args, int);
				printf("%d", integer);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
			break;
			default:
			break;
		}
		if (format[i + 1] != '\0')
		printf(", ");
		i++;	}
	printf("\n");
	va_end(args);
}
