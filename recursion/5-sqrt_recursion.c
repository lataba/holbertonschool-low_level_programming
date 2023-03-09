#include "main.h"

/**
 * _sqrt_recursion - Returns the value of x raised to the power of y
 * radical - find the root
 * @n: the number
 * @sq: the root
 * Return: the root
 */

/**
 * radical - find the root
 */

int radical(int n, int sq);

int _sqrt_recursion(int n)

{
	int sq;

	if (n > 1)
	{
		sq = n;
		return (radical(n, sq));
	}
	else if ((n == 0) || (n == 1))
		return (n);
	else
		return (-1);
}

int radical(int n, int sq)

{
	sq = sq / 2;
	if (sq * sq == n)
		return (sq);
	else if ((sq * sq) + 1 == n)
		return (-1);
	else if (((sq - 1) * (sq - 1) == n))
		return (sq - 1);
	else
		return (radical(n, sq));
}
