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
	unsigned int i = 0, j = 0, len;

	if (s1 == NULL)
		s1 = "";

	if ((s2 == NULL) || (n == 0))
		s2 = "";

	if (n >= strlen(s2))
		n = strlen(s2);

	len = strlen(s1) + n + 1;

	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);

	while (i < (len - 1))
	{
		if (i < strlen(s1))
			str[i] = s1[i];
		else if (s2[j])
		{
			str[i] = s2[j];
			j++;
		}
		i++;
	}
	str[len - 1] = '\0';
	return (str);
}
