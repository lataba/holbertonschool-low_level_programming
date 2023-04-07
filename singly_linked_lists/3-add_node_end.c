#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the beginning of a list_t list
 * @head: list beginning
 * @str: the content of the node
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
/*el doble puntero sirve por si*/
/*quiero hacerle algun cambio a la lista*/
/*(*head)->n en caso de tener doble puntero*/

	list_t *current = *head;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (current->next != NULL)
		current = current->next;
	current->next = new;

	return (new);
}
