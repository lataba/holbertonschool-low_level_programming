#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copy the string
 *
 * @src : string to copy
 *
 * @dest : pointer to a copy
 *
 * Return: a pointer to a string copy
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
