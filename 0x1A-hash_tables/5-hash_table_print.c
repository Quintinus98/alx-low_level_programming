#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int comma = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] && comma == 0)
		{
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			comma = 1;
		}
		else if (ht->array[i] && comma == 1)
			printf(", '%s': '%s'", ht->array[i]->key, ht->array[i]->value);
	}
	printf("}\n");
}
