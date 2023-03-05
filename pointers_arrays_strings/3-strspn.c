#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: the string
 *
 * @accept: the character
 *
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)

{
	int i = 0;
	unsigned int n = 0;

	while ((*s++) && (*s != '\0'))
	{
		for (i = 0; accept[i]; i++)
		{
			if ((*s == accept[i]) && (*s != '\0'))
				n++;
		}
	}
	return (n);
}
