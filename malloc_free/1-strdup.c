#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that copy a string
 * @str: entry array
 * Return: A pointer to de array
 */

char *_strdup(char *str)
{
	char *cparr = NULL;

	if (str == NULL)
		return (NULL);
	cparr = malloc(atoi(str) * sizeof(char));
	if (cparr == NULL)
		return (NULL);
	cparr = str;
	return (cparr);
}
