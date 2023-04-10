#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: the first node of the list
 * @n: the content of the nodes
 * Return: A pointer to the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *curr = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	curr = *head;
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = curr;
		*head = new;
		return (new);
	}
	while (curr->next != NULL)
		curr = curr->next;
	new->prev = curr;
	curr->next = new;
	return (new);
}
