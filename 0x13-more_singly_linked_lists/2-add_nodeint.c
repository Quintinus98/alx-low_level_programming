#include "lists.h"

/**
 * add_nodeint - adds a new node at the end of a list_t list.
 * @head: Beginning of the list.
 * @n: New int to be added.
 * Return: the address of the new element, or NULL if it failed.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;

	*head = newNode;
	return (*head);
}
