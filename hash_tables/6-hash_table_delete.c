#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *tmp;

	if (ht == NULL)
		return;
	node = NULL;
	tmp = NULL;
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			node = tmp;
			if (node->key != NULL)
				free(node->key);
			if (node->value != NULL)
				free(node->value);
			free(node);
			tmp = tmp->next;
		}
	}
	free(ht->array);
	free(ht);
}
