#include "main.h"

/**
 * print_diagsum - prints the sum of the two diagonals of a square matrix of integers
 * @a:
 *
 * @size:
 *
 * Return:
 */

void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i];
		a = a + size;
	}
	a = a - size;
	for (j = 0; j < size; j++)
	{
		sum2 = sum2 + a[j];
		a = a - size;
	}
	printf("%d, %d\n", sum1, sum2);
}
