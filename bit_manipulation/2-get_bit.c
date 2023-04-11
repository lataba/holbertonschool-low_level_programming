#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int
 * @index: the given index
 * Return: the value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{

	unsigned long int num = 1;

	num <<= index;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & num) == 0)
		return (0);
	else
		return (1);
}
