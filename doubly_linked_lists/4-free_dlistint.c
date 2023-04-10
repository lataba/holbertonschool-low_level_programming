#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head: the first node of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *erase = NULL;

	while (head != NULL)
	{
		erase = head;
		head = head->next;
		free(erase);
	}
}
