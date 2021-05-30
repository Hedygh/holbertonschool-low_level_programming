#include "hash_tables.h"
/**
 * hash_table_get - retrieve keys value
 * @ht: hash table
 * @key: key to retrieve
 * Return: Key value or Null if no key was found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int get_index;
	hash_node_t *tmp;

	if (!ht || !key || strlen(key) == 0)
		return (NULL);
	get_index = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[get_index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
