#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 *
 * @str: string
 *
 * Return: capitalized word
 */

char *cap_string(char *str)

{
	int i = 0, isep = 0, separetor;

	char sep[] = {32, '\t', '\n', 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};


	while (str[i])
	{
		for (isep = 0; isep <= 12; isep++)
			if ((i != 0) && (str[i - 1] == sep[isep]))
				separetor = isep;

		if (((str[i] >= 97) && (str[i] <= 122)) &&
				((i == 0) || (str[i - 1] == sep[separetor])))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
