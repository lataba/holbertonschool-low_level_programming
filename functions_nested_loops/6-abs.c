#include "main.h"

/**
 * _abs - the absolute value of an integer
 *
 * @n: The character to be checked.
 *
 * Return: number without sign
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
