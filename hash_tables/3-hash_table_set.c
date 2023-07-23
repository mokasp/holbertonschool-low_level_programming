#include "hash_tables.h"

/**
 * *createNode - allocate memory for nodes
 * @key: key/string
 * @value: value corresponding to a key
 *
 * Return: pointer to node
 */
hash_node_t *createNode(const char *key, const char *value)
{
	hash_node_t *node = (hash_node_t *) malloc(sizeof(node));

	node->key = malloc(strlen(key) + 1);
	node->value = malloc(strlen(value) + 1);
	strcpy(node->key, key);
	strcpy(node->value, value);
	node->next = NULL;
	return (node);
}

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
			node->value = malloc(strlen(value) = 1);
			strcpy(node->value, value);
			return (0);
		}
		prev = node;
		node = prev->next;
	}
	prev->next = createKey(key, value);
	return (1);
}
