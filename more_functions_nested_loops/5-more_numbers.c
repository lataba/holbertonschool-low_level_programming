#include "main.h"

/**
* more_numbers - Prints the numbers from 0 to 14 (10 times).
*
* Return: 01234567891011121314 (x10)
*/

void more_numbers(void)
{
	int i, fila;

	for (fila = 0; fila < 10; fila++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			_putchar(1 + '0');
		_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
