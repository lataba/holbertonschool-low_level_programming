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
	while (*str)
	{
		if ((*str >= 97) && (*str <= 122))
			*str = *str - 32;
		str++;
	}
	return (str);
}
