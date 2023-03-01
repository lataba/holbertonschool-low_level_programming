#include "main.h"
#include <stddef.h>

/**
 * *_strncpy - Copy strings
 *
 *  @dest: A destine string
 *
 *  @src: A string to be copy
 *
 *  @n: integer
 *
 *  Return: string copy
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] && (i < n))
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
