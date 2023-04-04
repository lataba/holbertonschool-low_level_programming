#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - prints the length of a list_t
 * @h: the list
 * Return: the length
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
