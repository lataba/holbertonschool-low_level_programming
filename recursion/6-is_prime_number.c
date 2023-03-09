#include "main.h"

/**
 * is_prime_number - returns 1 if the input is a prime number, otherwise 0
 * @n: the integer
 * @divisor: divisor
 * Return: 1 or 0
 */

int primo(int n, int divisor);

int is_prime_number(int n)

{
	if (n > 1)
	{
		return (primo(n, 2));
	}
	else
		return (0);
}

/**
 * primo - Checks if a number is prime.
 * @n: the number
 * @divisor: divisor
 * Return: If the integer is not prime - 0.
 *         If the number is prime - 1.
 */


int primo(int n, int divisor)

{
	if ((n % divisor != 0) && (divisor < n))
	{
		divisor++;
		return (primo(n, divisor));
	}
	if (divisor == n)
		return (1);
	else
		return (0);
}
