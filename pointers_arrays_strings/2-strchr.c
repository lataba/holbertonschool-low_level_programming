#include "main.h"

/**
 * _strchr -  locates a character in a string
 *
 * @s: the string
 *
 * @c: the character
 *
 * Return: a pointer to the first occurrence of the character c
 */

char *_strchr(char *s, char c)

{
	int i = 0;

	while (*s++)
	{
		if (s[i] == c)
			break;
	}
	return (s);
}
