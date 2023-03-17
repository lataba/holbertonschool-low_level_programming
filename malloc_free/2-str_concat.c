#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that copy a string
 * @str: entry array
 * Return: A pointer to de array
 */

char *_strdup(char *str)
{
	char *cpstr = NULL;
	int i, strtop;

	if (str == NULL)
		return (NULL);

	strtop = strlen(str) + 1;

	cpstr = malloc(strtop * sizeof(char));
	if (cpstr == NULL)
		return (NULL);
	for (i = 0; i < strtop; i++)
		cpstr[i] = str[i];
	return (cpstr);
}

/**
 * str_concat - function that concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * Return: a pointer to concatenate strings
 */

char *str_concat(char *s1, char *s2)
{
	char *concstr = NULL;
	int i = 0, j, stop1, stop2;

	if ((s1 == NULL) && (s2 == NULL))
		return (NULL);
	if (s1 == NULL)
		return (_strdup(s2));
	if (s2 == NULL)
		return (_strdup(s1));

	stop1 = strlen(s1);
	stop2 = strlen(s2) + 1;

	concstr = malloc((stop1 + stop2) * sizeof(char));
	if (concstr == NULL)
		return (NULL);

	for (i = 0; i < stop1; i++)
		concstr[i] = s1[i];
	for (j = 0; j < stop2; j++)
	{
		concstr[i] = s2[j];
		i++;
	}
	return (concstr);
}
