#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @str: string
 *
 * Return: uppercase letters
 */

char *string_toupper(char *str)

{
	while (*str++)
		if ((*str >= 'a') && (*str <= 'z'))
			*str = *str - 32;
		else if ((*str >= 'A') && (*str <= 'Z'))
			*str = *str + 32;
	return (str);
}
