#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a list
 * @h: list head
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		printf("%d", h->n);
		len++;
		h = h->next;
	}
	return (len);
}
