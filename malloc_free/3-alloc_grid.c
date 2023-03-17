#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array
 * @width: array width
 * @height: array height
 * Return: a pointer ti array
 */

int **alloc_grid(int width, int height)
{
	int wi;
	int **arrp = NULL;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	arrp = malloc(width * sizeof(int *));
	if (arrp == NULL)
		return (NULL);
	for (wi = 0; wi <= width; wi++)
		arrp[wi] = malloc(height * sizeof(int));
	return (arrp);
}
