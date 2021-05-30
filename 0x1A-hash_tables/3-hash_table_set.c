#include "hash_tables.h"
/**
 * hash_table_set - add element to hash table
 * @ht: hash table
 * @key: key
 * @value: value to add
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_ht;
	char *new_value;
	unsigned long int get_index, i;

	if (!ht || !key || !value || strlen(key) == 0
			|| ht->size == 0)
		return (0);

	get_index = key_index((const unsigned char *)key, ht->size);
	new_value = strdup(value);
	if (!new_value)
		return (0);
	i = get_index;
	while (ht->array[i])
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = new_value;
			return (1);
		}
		i++;
	}
	new_ht = malloc(sizeof(hash_node_t));
	if (!new_ht)
	{
		free(new_value);
		return (0);
	}
	new_ht->key = strdup(key);
	if (!new_ht)
	{
		free(new_value);
		return (0);
	}
	new_ht->value = new_value;
	new_ht->next = ht->array[get_index];
	ht->array[get_index] = new_ht;
	return (1);
}
