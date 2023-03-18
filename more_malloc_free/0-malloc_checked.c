#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: space of memory to be asigned
 * Return: 98 if fail, pointer if success.
 */

void *malloc_checked(unsigned int b)

{
	void *p = NULL;

	p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
