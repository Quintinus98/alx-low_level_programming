#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table
 * @size: is the size of the array
 * Return: Returns a pointer to the newly created hash table
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table = malloc(sizeof(shash_table_t));
	unsigned int i;

	if (!table)
		return (NULL);

	table->size = size;
	table->array = malloc(table->size * sizeof(shash_node_t *));
	table->shead = NULL;
	table->stail = NULL;

	if (!(table->array))
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;

	return (table);
}

/**
 * add_sorted_node - Adds a sorted node
 * @ht: hash table
 * @node: node to add
*/
void add_sorted_node(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *temp;

	/* When node is the first entry */
	if (ht->shead == NULL && ht->stail == NULL)
	{
		ht->shead = ht->stail = node;
		return;
	}
	/* When node is somewhere in the middle position */
	temp = ht->shead;
	while (temp)
	{
		if (strcmp(node->key, temp->key) < 0)
		{
			node->snext = temp;
			node->sprev = temp->sprev;
			temp->sprev = node;
			if (node->sprev != NULL)
				node->sprev->snext = node;
			else
				ht->shead = node;
			return;
		}
		temp = temp->snext;
	}
	/* When node is the last entry */
	ht->stail->snext = node;
	node->sprev = ht->stail;
	ht->stail = node;
}


/**
 * shash_table_set - adds an element to the sorted hash table
 * @ht: hash table
 * @key: key, cannot be an empty string
 * @value: value associated with the key, must be duplicated
 * Return: 1 if it succeeded, or 0 if it fails
*/
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node, *currentNode;
	int index;

	if (ht == NULL || *key == '\n' || *value == '\n')
		return (0);

	/* Get index using hash function and get node using index*/
	index = key_index((unsigned char *)key, ht->size);
	currentNode = ht->array[index];

	/* Key exists, update key's value.*/
	while (currentNode != NULL)
	{
		if (strcmp(currentNode->key, key) == 0)
		{
			free(currentNode->value);
			currentNode->value = strdup(value);
			return (1);
		}
		currentNode = currentNode->next;
	}

	/* Handle the collision */
	node = create_snode(key, value);
	if (!node)
		return (0);
	node->next = ht->array[index];
	ht->array[index] = node;
	add_sorted_node(ht, node);
	return (1);
}

/**
 * create_snode - Creates a new sorted node
 * @key: key
 * @value: value
 * Return: A new node
*/
shash_node_t *create_snode(const char *key, const char *value)
{
	shash_node_t *node;

	/* Create a node */
	node = malloc(sizeof(shash_node_t));
	if (!node || *key == '\n' || key == NULL)
		return (NULL);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	node->snext = NULL;
	node->sprev = NULL;

	return (node);
}

/**
 * shash_table_get - retrieves a value associated with a key.
 * @ht: hash table
 * @key: key, cannot be an empty string
 * Return: the value associated with the element
 * or NULL if key couldn’t be found
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long idx;
	shash_node_t *node;

	if (ht == NULL || *key == '\0' || key == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[idx];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}

/**
 * shash_table_print - Prints a hash table
 * @ht: the hash table
*/
void shash_table_print(const shash_table_t *ht)
{
	int comma = 0;
	shash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");

	node = ht->shead;
	while (node)
	{
		if (comma == 1)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		if (comma == 0)
			comma = 1;
		node = node->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a hash table in reverse
 * @ht: the hash table
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	int comma = 0;
	shash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");

	node = ht->stail;
	while (node)
	{
		if (comma == 1)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		if (comma == 0)
			comma = 1;
		node = node->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table
 * @ht: the hash table
*/
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *temp;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node)
	{
		temp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = temp;
	}
	free(ht->array);
	free(ht);
}
