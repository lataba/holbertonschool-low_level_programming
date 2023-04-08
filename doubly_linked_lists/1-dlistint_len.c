#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a list.
 * @h: list head
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
