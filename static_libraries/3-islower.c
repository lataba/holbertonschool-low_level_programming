#include "main.h"

/**
 * _islower - Entry point
 * @c: The character to be checked.
 *
 * Description: 'checks for lowercase character'
 *
 * Return: (1) if lower,(2) if not
 */

int _islower(int c)
{

	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}
