#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - function that creates a hash table
 * @size: the size of the array
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **data;
	unsigned long int i;
	hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
		return (NULL);

	data = malloc(sizeof(hash_node_t *) * size);
	if (data == NULL)
	{
		free(hash_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		data[i] = NULL;

	hash_table->size = size;
	hash_table->array = data;

	return (hash_table);
}
