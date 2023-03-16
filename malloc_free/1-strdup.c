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
