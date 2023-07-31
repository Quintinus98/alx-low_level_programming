#include "lists.h"

/**
 * sum_listint - Sum of all the data (n) of a listint_t linked list.
 * @head: head.
 * Return: Summed list data.
*/
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	unsigned int sum = 0;

	if (!temp)
		return (0);

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
