#include "main.h"

/**
 * _isalpha - Character is alphabetic or not
 *
 * @c: The character to be checked.
 *
 * Return: 1 if letter, 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
