#include "hash_tables.h"

/**
 * hash_table_set - adds an element to hash table
 * @ht hash table modify
 * @key: key
 * @value: value assosiated with key
 *
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t node = createNode(key, value);
	int index = key_index(key);
	hash_node_t currentNode = ht->array[index];

	ht->array[index] = node;
	return (1);

}
