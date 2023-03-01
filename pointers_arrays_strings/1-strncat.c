#include "main.h"
#include <stddef.h>

/**
 * *_strncat - Concatenates two strings
 *
 *  @dest: A string to be concatenate
 *
 *  @src: A string to be concatenate
 *
 *  @n: bytes from src
 *
 *  Return: integer
 */

char *_strncat(char *dest, char *src, int n)
{
	char *out = dest;

	int i, j;

	i = j = 0;

	while (dest[i] != '\0')
		i++;
	do {
		dest[i] = src[j];
		i++;
		j++;
	} while ((src[j] != '\0') && (j < n));
	
	if (j < n)
		src = NULL;

	return (out);
}
