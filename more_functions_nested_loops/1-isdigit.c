#include "main.h"

/**
 * _isdigit - cheks for uppercase character
 *
 * @c: symbol to be checked
 *
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
