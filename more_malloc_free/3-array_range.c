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
	int *p;
	int qua, i = 0, num = min;

	if (min > max)
		return (NULL);

	for (qua = min; qua <= max; qua++)
		;
	p = malloc(sizeof(int) * qua);
		if (p == NULL)
			return (NULL);
	while (num <= max)
	{
		p[i] = num;
		num++;
		i++;
	}
	return (p);
}
