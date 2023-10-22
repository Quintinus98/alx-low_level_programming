#include "lists.h"

/**
 * sum_dlistint - sums a doubly linked list
 * @head: head
 * Return: Prints and Returns the number of nodes.
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
