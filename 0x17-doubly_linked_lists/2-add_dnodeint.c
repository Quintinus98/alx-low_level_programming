#include "lists.h"

/**
 * add_dnodeint - Adds an integer node to a doubly linked list
 * @head: head
 * @n: value to be added
 * Return: a doubly linked list.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return (*head);
}
