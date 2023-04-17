#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: is the hash table to look into
 * @key: is the key to looking for
 * Return: the value associated with the element, or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *node;

	if (key == NULL || *key == '\0' || ht == NULL)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);

	node = ht->array[i];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	if (node == NULL)
		return (NULL);
	else
		return (node->value);
}
