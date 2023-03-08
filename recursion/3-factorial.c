#include "main.h"

/**
 * factorial - factorial of a given number
 * @n: the number
 * Return: the factorial results
 */

int factorial(int n)

{
	int resu = -1;

	if (n >= 1)
	{
		resu = n * factorial(n - 1);
	}
	else if (n == 0)
		return (1);
	return (resu);
}
