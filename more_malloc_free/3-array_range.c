#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function that creates an array of integers
 * @min: then minimum number
 * @max: the max number
 *
 * Return: A pointer tu array
 */

int *array_range(int min, int max)

{
	int *p = NULL;
	int size, i, num = min;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	p = malloc(sizeof(int) * size);
		if (p == NULL)
			return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = num;
		num++;
	}
	return (p);
}
