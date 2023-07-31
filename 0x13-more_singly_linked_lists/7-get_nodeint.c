#include "lists.h"

/**
 * get_nodeint_at_index - Get node at index
 * @head: head.
 * @index: index of the node, starting at 0
 * Return: Popped head.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node, *temp = head;
	unsigned int cnt = 0;
	int ret = 0;

	if (!head)
		return (NULL);

	while (temp)
	{
		if (index == cnt)
		{
			node->n = temp->n;
			node->next = temp->next;
			return (node);
		}
		temp = temp->next;
		cnt++;
	}
	return (NULL);
}
