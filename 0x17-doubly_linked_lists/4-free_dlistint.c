#include "lists.h"

/**
 * free_head - Frees head
 * @head: head of doubly linked list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nextNode, *currentNode;

	if (head == NULL)
		return;

	currentNode = head;
	while (currentNode)
	{
		nextNode = currentNode->next;
		free(currentNode);
		currentNode = nextNode;
	}
}
