#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @size: array length
 * @c: chars
 * Return: A pointer to de array
 */

char *create_array(unsigned int size, char c)

{
	char *parr = NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);

	parr = malloc(size * sizeof(char));
	if (parr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		parr[i] = c;
	return (parr);
}
