#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - create a hash table
 * @size: size of the array
 * Return: newly created hash table or null
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hsh_table = NULL;

	if (size <= 0)
		return (NULL);

	hsh_table = malloc(sizeof(hash_table_t));

	if (!hsh_table)
		return (NULL);

	hsh_table->array = malloc(sizeof(hash_node_t));
	if (!hsh_table->array)
	{
		free(hsh_table);
		return (NULL);
	}
	return (hsh_table);
}
