#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 * @head: head.
 * @index: index of the node, starting at 0
 * Return: Popped head.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = *head;
	listint_t *current = *head;

	if (!*head)
		return (-1);
	else if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
	}
	else
	{
		while (index > 0)
		{
			prev = current;
			current = current->next;
			index--;
		}
		prev->next = current->next;
		free(current);
		current = NULL;
	}
	return (1);
}
