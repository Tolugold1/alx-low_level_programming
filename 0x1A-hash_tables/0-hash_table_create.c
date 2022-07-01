#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_create - create a hash table
 * @size: size is the size of the array
 * Return: pointer to new hash table else NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;

	new_hash = malloc(sizeof(hash_table_t))
		if (new_hash == NULL)
		{
			return (NULL);
		}
	new_hash->array = calloc(size, sizeof(hash_node_t*));
	if (new_hash == NULL)
	{
		free(new_hash);
		return (NULL);
	}
	new_hash->size = size;
	return (new_hash);
}
