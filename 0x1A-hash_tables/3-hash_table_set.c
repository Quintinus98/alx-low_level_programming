#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key, cannot be an empty string
 * @value: value associated with the key, must be duplicated
 * Return: 1 if it succeeded, or 0 if it fails
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *currentNode;
	int index;

	if (ht == NULL || *key == '\n' || *value == '\n')
		return (0);

	/* Get index using hash function and get node using index*/
	index = key_index((unsigned char *)key, ht->size);
	currentNode = ht->array[index];

	/* key with index does not exist */
	if (!currentNode)
	{
		node = create_node(key, value);
		if (!node)
			return (0);
		ht->array[index] = node;
		return (1);
	}

	/* Key exists, update key's value.*/
	while (node != NULL)
	{
		if (strcmp(currentNode->key, key) == 0)
		{
			free(currentNode->value);
			currentNode->value = strdup(value);
			return (1);
		}
		node = node->next;
	}

	/* Handle the collision - Add node at the beginning */
	node = create_node(key, value);
	if (!node)
		return (0);
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}

/**
 * create_node - Creates a new node
 * @key: key
 * @value: value
 * Return: A new node
*/
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	/* Create a node */
	node = malloc(sizeof(hash_node_t));
	if (!node || *key == '\n')
		return (NULL);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	return (node);
}
