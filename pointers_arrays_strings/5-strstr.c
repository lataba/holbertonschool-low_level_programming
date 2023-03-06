#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack:
 *
 * @needle:
 *
 * Return: pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)

{
	int i = 0;

	while (*haystack)
	{
		i = 0;

		if ((haystack[i] == needle[i]) && (*needle != 0))
		{
			while (haystack[i] == needle[i])
			{
				if (needle[i + 1] != '\0')
				{
					i++;
					return (haystack);
				}
			}
		}
		else if (*needle == 0)
			return (haystack);
		haystack++;
	}
	return ('\0');
}
