#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table
 * @key: key, cannot be an empty string
 * Return: the value associated with the element
 * or NULL if key couldn’t be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int idx = key_index((unsigned char *)key, ht->size);
	hash_node_t *node = ht->array[idx];

	if (ht == NULL)
		return (NULL);

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
