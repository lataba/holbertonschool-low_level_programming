#include "hash_tables.h"
#include <stddef.h>
#include <stdio.h>

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *aux;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			aux = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = aux;
		}
	}

	free(ht->array);
	free(ht);
}
