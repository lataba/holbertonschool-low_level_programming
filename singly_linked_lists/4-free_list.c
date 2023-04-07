#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: list beginning
 */

void free_list(list_t *head)
{
	list_t *current = head, *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
	head = NULL;
}
