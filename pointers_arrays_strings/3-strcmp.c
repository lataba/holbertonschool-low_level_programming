#include "main.h"

/**
 *  _strcmp - compares two strings
 *
 *  @s1: string to be compare
 *
 *  @s2: string to be compare
 *
 *  Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, dif = 0;

	while (s1[i] && s2[i] && dif == 0)
	{
		if (s1[i] == s2[i])
			i++;
		else
			dif = s1[i] - s2[i];
	}
	return (dif);
}
