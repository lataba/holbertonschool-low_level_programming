#include "main.h"

/**
 * puts_half - prints half of string
 *
 * @str : string
 *
 * Return: @str half
 */

void puts_half(char *str)
{
	int i, fin;

	i = fin = 0;

	while (str[i++])
		fin++;
	for (i = (fin / 2); i <=  (fin - 1); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
