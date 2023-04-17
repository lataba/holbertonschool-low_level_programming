#include "hash_tables.h"
#include <string.h>

unsigned long int key_index(const unsigned char *key, unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table to modify
 * @key: the key (cannot be an empty string)
 * @value: the value associated with key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *val_cop;
	hash_node_t *elem;
	unsigned long int i, j;

	if (value == NULL || *key == '\0' || key == NULL || ht == NULL)
		return (0);

	val_cop = strdup(value);
	if (val_cop == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	for (j = i; ht->array[j]; j++)
	{
		if (strcmp(ht->array[j]->key, key) == 0)
		{
			free(ht->array[j]->value);
			ht->array[j]->value = val_cop;
			return (1);
		}
	}

	elem = malloc(sizeof(hash_node_t));
	if (elem == NULL)
	{
		free(val_cop);
		return (0);
	}
	elem->key = strdup(key);
	if (elem->key == NULL)
	{
		free(elem);
		return (0);
	}
	elem->value = val_cop;
	elem->next = ht->array[i];
	ht->array[i] = elem;

	return (1);
}
