#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list_t list.
 * @head: End of the list.
 * @n: New int to be added.
 * Return: the address of the new element, or NULL if it failed.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *lastNode = *head;

	if (!newNode)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}
	else
	{
		while (lastNode->next != NULL)
			lastNode = lastNode->next;
		lastNode->next = newNode;
		return (lastNode);
	}
}
