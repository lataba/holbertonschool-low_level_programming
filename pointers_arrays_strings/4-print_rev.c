#include "main.h"

/**
 * print_rev - prints a string on reverse
 *
 * @s : string
 *
 * Return: @s reverse
 */

void print_rev(char *s)
{
	int i, inic;

	i = inic = 0;

	while (s[i++])
		inic++;
	for (i = inic - 1 ; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
