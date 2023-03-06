#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: the string
 *
 * @accept: the character
 *
 * Return:  a pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)

{
	int i = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
			if (*s == accept[i])
				return (s);
		s++;
	}
	return ('\0');
}
