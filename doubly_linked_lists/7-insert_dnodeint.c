#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: the head of the list
 * @idx: the position to insert
 * @n: data for the new node
 * Return: The new node
 */
size_t dlistint_len(const dlistint_t *h);

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0, len = 0;
	dlistint_t *new = NULL, *curr = NULL;
/*
	curr = *h;
	if (idx == i)
		return (add_dnodeint(h, n));
	else
	{
		while (curr->next != NULL && i < (idx - 1))
		{
			curr = curr->next;
			i++;
		}
		if (idx == i)
			return (add_dnodeint_end(h, n));
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
	}
	return (new);
}*/

	len = dlistint_len(*h);
	curr = *h;

	if (len < idx + 1)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (len == idx + 1)
		return (add_dnodeint_end(h, n));
	else
	{
		while (curr->next != NULL && i < (idx - 1))
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
	}
	return (new);
}

/**
 * dlistint_len - Returns the length of a linked list
 * @h: Head of the linked list
 * Return: The length of the linked list
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
