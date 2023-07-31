#include "lists.h"

/**
 * pop_listint - Pops first node.
 * @head: head to be popped
 * Return: Popped head.
*/
int pop_listint(listint_t **head)
{
	listint_t *pop;
	unsigned int cnt = 1;
	int ret = 0;

	if (*head == NULL)
		return (0);

	while (cnt)
	{
		ret = (*head)->n;
		pop = (*head)->next;
		(*head) = pop;
		cnt--;
	}
	return (ret);
}
