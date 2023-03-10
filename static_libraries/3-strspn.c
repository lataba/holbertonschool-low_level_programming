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

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
