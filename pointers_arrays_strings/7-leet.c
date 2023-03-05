#include "main.h"

/**
 * *leet - encodes a string into 1337
 *
 * @str: string
 *
 * Return: encodes string
 */

char *leet(char *str)

{
	char min[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char num[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	int i = 0, j = 0, index = 0;

	while (str[index])
	{
		i = j = 0;
		while ((i < 10) && (str[index] != min[i]))
		{
			i++;
			j++;
		}
		if (str[index] == min[i])
			str[index] = num[j];
		index++;
	}
	return (str);
}
