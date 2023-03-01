#include "main.h"
#include <stddef.h>

/**
 * *_strcat - Concatenates two strings
 *
 *  @dest: A string to be concatenate
 *
 *  @src: A string to be concatenate
 *
 *  Return: integer
 */

char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
		dest++;
	do {
		*dest = *src;
		dest++;
		src++;
	} while (*src != '\0');
	
	src = NULL;
	return (dest);
}
