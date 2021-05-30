#include "hash_tables.h"
/**
 * key_index - return index of key
 * @key: keys
 * @size of the array
 * Return: key's index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
