#include "main.h"

/**
* print_line - Prints a right line.
*
*@n : times _ repeat
*
* Return: ___________ (n veces)
*/

void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	_putchar('\n');
}
