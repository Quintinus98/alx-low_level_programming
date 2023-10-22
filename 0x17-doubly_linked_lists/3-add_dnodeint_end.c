#include "lists.h"

/**
 * add_dnodeint_end - Adds an integer node to the end of a doubly linked list
 * @head: head
 * @n: value to be added
 * Return: a doubly linked list.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	if (newNode == NULL)
		print_error("Error: malloc failed");

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return;
	}
	while (last->next != NULL)
		last = last->next;

	last->next = newNode;
	newNode->prev = last;
}
