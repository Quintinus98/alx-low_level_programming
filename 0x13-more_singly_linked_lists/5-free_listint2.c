#include "lists.h"

/**
 * free_listint2 - frees a list_t list.
 * @head: Beginning of the list.
 * Return: Nothing.
*/

void free_listint2(listint_t **head)
{
	listint_t *nextNode, *currentNode;

	if (*head == NULL)
		return;

	currentNode = *head;
	while (currentNode)
	{
		nextNode = currentNode->next;
		free(currentNode);
		currentNode = nextNode;
	}
	*head = NULL;
}
