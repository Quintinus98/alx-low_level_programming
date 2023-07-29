#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: Beginning of the list.
 * @str: New string to be added.
 * Return: the address of the new element, or NULL if it failed.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));
	unsigned int len = 0;

	if (!str)
	{
		free(newNode);
		return (NULL);
	}
	while (str && str[len])
		len++;
	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = *head;

	*head = newNode;

	return (*head);
}
