#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of s2 to be copy
 * Return: a pointer or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *str = NULL;
	unsigned int i, j = 0, len;

	if (s1 == NULL)
	{
		len = n + 1;
		str = malloc(sizeof(char) * 1);
		if (str == NULL)
			return (NULL);
		for (i = 0; i < len; i++)
			str[i] = s2[i];
		str[i] = '\0';
		return (str);
	}

	if (s2 == NULL)
	{
		len = strlen(s1) + 1;
		str = malloc(sizeof(char) * len);
		if (str == NULL)
			return (NULL);
		for (i = 0; i < len; i++)
			str[i] = s1[i];
		str[i] = '\0';
		return (str);
	}

	if (n >= strlen(s2))
		len = strlen(s1) + strlen(s2) + 1;
	else
		len = strlen(s1) + n + 1;
	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
		str[i] = s1[i];
	while ((i < len) && (j < n))
	{
		str[i] = s2[j];
		j++;
		i++;
	}
	str[len] = '\0';
	return (str);
}
