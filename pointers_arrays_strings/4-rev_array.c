#include "main.h"

/**
 * reverse_array - array to reverse
 *
 * @a : array
 *
 * @n : elements quantity
 *
 * Return: @a reverse
 */

void reverse_array(int *a, int n)
{
	int i, aux;

	i = 0;

	if (n != 0)
		for (i = 0 ; i <=  ((n - 1) / 2) ; i++)
		{
			aux = a[i];
			a[i] = a[(n - 1) - i];
			a[(n - 1) - i] = aux;
		}
}
