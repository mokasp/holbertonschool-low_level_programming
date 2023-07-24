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
	hash_node_t *node, *newNode;
	char *newValue;
	unsigned long int slot;
	if (ht == NULL)
		return (0);

	slot = key_index((const unsigned char *)key, ht->size);
	
	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	newValue = strdup(value);
	if (newValue == NULL)
		return (0);
	
	node = ht->array[slot];

	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);

	newNode = createNode(key, value);
	
	if (ht->array[slot] == NULL)
	{
		ht->array[slot] = newNode;
		return (1);
	}
	
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = newValue;
			return (1);
		}
		node = node->next;
	}

	newNode->next = ht->array[slot];
	ht->array[slot] = newNode;
	return (1);
}
