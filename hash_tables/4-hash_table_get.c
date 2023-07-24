#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table modify
 * @key: key
 *
 * Return: value associated with key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int slot;
	hash_node_t *node;
	
	slot = key_index((const unsigned char *)key, ht->size);
	node = ht->array[slot];
	if (node == NULL)
		return (NULL);
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->value;
	}
	return (NULL);
}
