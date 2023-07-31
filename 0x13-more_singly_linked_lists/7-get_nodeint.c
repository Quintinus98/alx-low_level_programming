#include "lists.h"

/**
 * get_nodeint_at_index - Get node at index
 * @head: head.
 * @index: index of the node, starting at 0
 * Return: Popped head.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int cnt = 0;
	int ret = 0;

	if (!head)
		return (NULL);

	while (head)
	{
		if (index == cnt)
		{
			node->n = head->n;
			node->next = head->next;
			return (node);
		}
		head = head->next;
		cnt++;
	}
	return (NULL);
}
