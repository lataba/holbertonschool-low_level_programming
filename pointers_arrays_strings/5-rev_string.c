#include "main.h"

/**
 * rev_string - string on reverse
 *
 * @s : string
 *
 * Return: @s reverse
 */

void rev_string(char *s)
{
	int i, fin, aux;

	i = fin = 0;

	while (s[i++])
		fin++;
	for (i = 0 ; i <=  ((fin - 1) / 2) ; i++)
	{
		aux = s[i];
		s[i] = s[(fin - 1) - i];
		s[(fin - 1) - i] = aux;
	}
}
