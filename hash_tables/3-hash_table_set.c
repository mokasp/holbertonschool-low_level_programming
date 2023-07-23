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
	hash_node_t *node = (hash_node_t *) malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (NULL);
	node->key = (const char *) malloc(strlen(key) + 1);
	node->value = (const char *) malloc(strlen(key) + 1);
	strcpy(node->key, key);
	strcpy(node->value, value);
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
	hash_node_t node = createNode(key, value);
	int index = key_index(key);
	hash_node_t currentNode = ht->array[index];

	ht->array[index] = node;
	return (1);

}
