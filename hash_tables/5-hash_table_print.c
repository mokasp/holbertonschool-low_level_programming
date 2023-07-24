#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table modify
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	char f;
	unsigned long int i;
	hash_node_t *tmp;

	if (ht == NULL)
		return;
	f = 0;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			if (f == 1)
				printf(", ");
			while (tmp != NULL)
			{
				
				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
				f = 1;
			}
		}
	}
	printf("}\n");
}
