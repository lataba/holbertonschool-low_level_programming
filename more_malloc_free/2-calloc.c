#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: number of elememts
 * @size: size of the elements
 * Return: A pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	void *p = NULL;
	char *paux = NULL;
	unsigned int i;

	if ((nmemb == 0) || (size == 0))
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	paux = (char *) p;
	for (i = 0; i < nmemb * size; i++)
	{
		*(paux + i) = 0;
	}
	return (p);
}

