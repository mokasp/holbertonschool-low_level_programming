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
	unsigned long int slot = key_index(key, sizeof(ht->array));
	hash_node_t *prev;

	hash_node_t *node = ht->array[slot];

	if (node == NULL)
	{
		ht->array[slot] = createNode(key, value);
		return (1);
	}
	
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = malloc(strlen(value) + 1);
			strcpy(node->value, value);
			return (1);
		}
		prev = node;
		node = prev->next;
	}
	prev->next = createNode(key, value);
	return (1);
}
