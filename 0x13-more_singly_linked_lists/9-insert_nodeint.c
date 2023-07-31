#include "lists.h"

/**
 * insert_nodeint_at_index - Insert node at index
 * @head: head.
 * @idx: index of the node, starting at 0
 * @n: value to be inserted.
 * Return: Popped head.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *newNode = malloc(sizeof(listint_t));
	unsigned int cnt = 0;

	if (!temp)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (*head);
	}

	while (temp && idx > 0 && cnt > idx)
	{
		if ((idx - 1) == (cnt))
		{
			newNode->next = (temp)->next;
			(temp->next) = newNode;
			return (temp);
		}
		temp = (temp)->next;
		cnt++;
	}
	return (NULL);
}
