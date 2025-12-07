#include "hash_tables.h"

/**
 * _strlen - return length of a string
 * @str: string
 * Return: length
 */
int _strlen(const char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 * hash_table_set - adds or updates an element in the hash table
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *tmp;
	char *val;
	unsigned long int idx;

	if (!ht || !key || !value || _strlen(key) == 0 || ht->size == 0)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	val = strdup(value);
	if (!val)
		return (0);
	tmp = ht->array[idx];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = val;
			return (1);
		}
		tmp = tmp->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (!node)
	{
		free(val);
		return (0);
	}
	node->key = strdup(key);
	if (!node->key)
	{
		free(val);
		free(node);
		return (0);
	}
	node->value = val;
	node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);
}
