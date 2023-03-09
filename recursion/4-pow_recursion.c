#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: base
 * @y: exponente
 * Return: the power result
 */

int _pow_recursion(int x, int y)

{
	int resu = -1;

	if (y > 0)
	{
		resu = x * _pow_recursion(x, (y - 1));
	}
	else if (y == 0)
		return (1);
	return (resu);
}
