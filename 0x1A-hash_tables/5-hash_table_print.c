#include "hash_tables.h"
/**
 * hash_table_print - print hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned int i, j = 0;

	if (!ht)
		return;
	printf("{");
	i = 0;
	while (i < ht->size)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (j == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
			j = 1;
		}
	i++;
	}
	printf("}\n");
}

