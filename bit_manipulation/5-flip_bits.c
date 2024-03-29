#include "main.h"

/**
 * flip_bits - returns the number of bits to flip to get from one number to an.
 * @n: number 1
 * @m: number 2
 * Return: Number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff)
	{
		count += diff & 1;
		diff >>= 1;
	}

	return (count);
}
