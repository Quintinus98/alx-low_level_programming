#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head
 * @index: value to be added
 * Return: a doubly linked list.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int cnt = 0;

	if (!temp)
		return (NULL);

	while (temp)
	{
		if (index == cnt)
			return (temp);
		temp = temp->next;
		cnt++;
	}
	return (NULL);
}
