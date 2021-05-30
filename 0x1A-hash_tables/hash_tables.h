#ifndef HASH_TABLES_H
#define HASH_TABLES_H
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;
/**
 * struct shash_node_s - Sorted hash table
 * @key: unique key string
 * @value: value of key
 * @next: next node pointer
 * @sprev: prev element pointer of list
 * @snext: next element pointer of list
 */
typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Sorted hash table main structure
 * @size: size of array
 * @array: array of size @size
 * @shead: first element of the list
 * @stail: last element of the list
 * This array is made to handle collision as
 * when a collision appears a new list stores
 * all values in each cells
 */
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
shash_table_t *shash_table_create(unsigned long int size);
#endif
