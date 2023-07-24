#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table modify
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, f;

	f = 0;
	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (f)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			f = 1;
		}
	}
	printf("}\n");
}
