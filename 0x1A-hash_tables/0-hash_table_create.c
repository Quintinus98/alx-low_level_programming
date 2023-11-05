#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: is the size of the array
 * Return: Returns a pointer to the newly created hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	unsigned int i;

	if (!table)
		return (NULL);

	table->size = size;
	table->array = malloc(table->size * sizeof(hash_node_t));

	if (!(table->array))
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}
