#include "main.h"

/**
 * print_sign - Character is < 0 , > 0 or 0
 *
 * @n: The number of which the sign will be printed.
 *
 * Return: 1 if > 0, 0 if not
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
