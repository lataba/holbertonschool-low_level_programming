#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string
 *
 * Return: @s length
 */

int _strlen(char *s)
{
	int cont = 0;

	while (*s++)
		cont++;

	return (cont);
}
