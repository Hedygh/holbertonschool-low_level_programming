#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node, *next;

	if (!ht)
		return;
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node)
		{
			next = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = next;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
