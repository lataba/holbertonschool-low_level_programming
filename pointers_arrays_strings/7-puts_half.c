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
	int i, fin, inic;

	i = fin = inic = 0;

	while (str[i++])
		fin++;
	if (fin % 2 == 0)
		inic = fin / 2;
	else
		inic = (fin + 1) / 2;
	for (i = inic; i <  fin; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
