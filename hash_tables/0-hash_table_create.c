#include "hash_tables.h"

/**
 * *createNode - allocate memory for nodes
 * @key: key/string
 * @value: value corresponding to a key
 *
 * Return: pointer to node
 */
hash_node_t *createNode(char *key, char *value)
{
	hash_node_t *node = (hash_node_t *) malloc(sizeof(hash_node_t));
	node->key = (char *) malloc(strlen(key) + 1);
	node->value = (char *) malloc(strlen(key) + 1);
	strcpy(node->key, key);
	strcpy(node->value, value);
	return (node);
}
/**
 * *hash_table_create - allocate memory for table
 * @size: size of table
 *
 * Return: pointer to table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = (hash_table_t *) malloc(sizeof(hash_table_t));
	table->size = size;
	table->array = (hash_node_t **) calloc(table->size, sizeof(hash_node_t *));
	for (i = 0; i < table->size; i++;)
		table->array[i] = NULL;
	return (table);

}
