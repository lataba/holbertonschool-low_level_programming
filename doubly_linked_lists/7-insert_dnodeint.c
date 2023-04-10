#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: the head of the list
 * @idx: the position to insert
 * @n: data for the new node
 * Return: The new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new = NULL, *curr = NULL;

	curr = *h;

	while (curr != NULL && i < (idx - 1))
	{
		curr = curr->next;
		i++;
	}
	if (i == (idx - 1))
	{
		new = (malloc(sizeof(dlistint_t)));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = curr->next;
		curr->next = new;
		new->prev = curr;
	}
	return (new);
}
