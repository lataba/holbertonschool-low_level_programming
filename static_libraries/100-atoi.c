#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts string on integer
 *
 * @s : string
 *
 * Return: an integer
 */

int _atoi(char *s)
{
	int i, sign;

	unsigned int n;

	i = n = 0;

	sign = 1;

	while (((s[i] < '0') || (s[i] > '9')) && (s[i] != '\0'))
	{
		if (s[i] == '-')
			sign = sign * -1;
		i++;
	}
	while ((s[i] >= '0') && (s[i] <= '9') && (s[i] != '\0'))

	{
		n = (n * 10) + (s[i] - '0');
		i++;
	}

	return (n * sign);
}
