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
	int i, j;
	int **arrp = NULL;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	arrp = malloc(height * sizeof(int *));
	if (arrp == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arrp[i] = malloc(width * sizeof(int));
		if (arrp[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arrp[j]);
			free(arrp);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			arrp[i][j] = 0;
	}
	return (arrp);
}
