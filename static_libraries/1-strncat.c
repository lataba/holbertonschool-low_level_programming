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
	int i, j;

	i = j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i + n + 1] = '\0';

	return (dest);
}
