#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table modify
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (i < (ht->size - 1))
				printf("'%s': '%s', ", ht->array[i]->key, ht->array[i]->value);
			else
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
	}
	printf("}\n");
}
