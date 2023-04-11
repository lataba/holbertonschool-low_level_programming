#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index of a list
 * @head: the first node of the list
 * @index: the position of the node
 * Return: 1 or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = NULL;
	unsigned int i = 0;

	curr = *head;

	if (*head == NULL || head == NULL)
		return (-1);

	while (i < index)
	{
		curr = curr->next;

		if (curr == NULL)
			return (-1);
		i++;
	}

	if (index == 0)
	{
		*head = curr->next;
		if (curr->next != NULL)
			(curr->next)->prev = NULL;
		free(curr);
		return (1);
	}

	if (curr->next == NULL)
	{
		(curr->prev)->next = NULL;
	}
	else
	{
		(curr->prev)->next = curr->next;
		(curr->next)->prev = curr->prev;
	}
	free(curr);
	return (1);
}
